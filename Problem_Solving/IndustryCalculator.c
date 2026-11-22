
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>

#define MAX_INPUT 512
#define HISTORY_SIZE 50

typedef struct
{
    const char *input;
    int error;
    const char *message;
    double ans;
} Parser;

typedef struct
{
    char expression[MAX_INPUT];
    double result;
} History;

History history[HISTORY_SIZE];
int history_count = 0;

// Function declarations
double parse_expression(Parser *p);
double parse_term(Parser *p);
double parse_unary(Parser *p);
double parse_power(Parser *p);
double parse_primary(Parser *p);

// Skip whitespace
void skip_spaces(Parser *p)
{
    while (isspace((unsigned char)*p->input))
        p->input++;
}

// Set parser error
void set_error(Parser *p, const char *message)
{
    if (!p->error)
    {
        p->error = 1;
        p->message = message;
    }
}

// Expression: addition and subtraction
double parse_expression(Parser *p)
{
    double result = parse_term(p);

    while (!p->error)
    {
        skip_spaces(p);

        char op = *p->input;

        if (op != '+' && op != '-')
            break;

        p->input++;

        double right = parse_term(p);

        if (op == '+')
            result += right;
        else
            result -= right;
    }

    return result;
}

// Term: multiplication, division, modulus
double parse_term(Parser *p)
{
    double result = parse_unary(p);

    while (!p->error)
    {
        skip_spaces(p);

        char op = *p->input;

        if (op != '*' && op != '/' && op != '%')
            break;

        p->input++;

        double right = parse_unary(p);

        if (p->error)
            break;

        if ((op == '/' || op == '%') && right == 0)
        {
            set_error(p, "Division by zero");
            break;
        }

        if (op == '*')
            result *= right;
        else if (op == '/')
            result /= right;
        else
            result = fmod(result, right);
    }

    return result;
}

// Unary: positive and negative
double parse_unary(Parser *p)
{
    skip_spaces(p);

    if (*p->input == '+')
    {
        p->input++;
        return parse_unary(p);
    }

    if (*p->input == '-')
    {
        p->input++;
        return -parse_unary(p);
    }

    return parse_power(p);
}

// Power: exponentiation
double parse_power(Parser *p)
{
    double result = parse_primary(p);

    skip_spaces(p);

    if (*p->input == '^')
    {
        p->input++;

        double exponent = parse_unary(p);

        errno = 0;
        result = pow(result, exponent);

        if (errno == ERANGE || !isfinite(result))
            set_error(p, "Invalid power operation");
    }

    return result;
}

// Primary: numbers, parentheses, functions, constants
double parse_primary(Parser *p)
{
    skip_spaces(p);

    if (*p->input == '\0')
    {
        set_error(p, "Unexpected end of expression");
        return 0;
    }

    // Parentheses
    if (*p->input == '(')
    {
        p->input++;

        double result = parse_expression(p);

        skip_spaces(p);

        if (*p->input != ')')
            set_error(p, "Missing closing parenthesis");
        else
            p->input++;

        return result;
    }

    // Numeric input
    if (isdigit((unsigned char)*p->input) || *p->input == '.')
    {
        char *end;

        errno = 0;
        double result = strtod(p->input, &end);

        if (end == p->input || errno == ERANGE)
        {
            set_error(p, "Invalid number");
            return 0;
        }

        p->input = end;
        return result;
    }

    // Names: functions and constants
    if (isalpha((unsigned char)*p->input))
    {
        char name[32];
        int i = 0;

        while (isalpha((unsigned char)*p->input))
        {
            if (i < 31)
                name[i++] = *p->input;

            p->input++;
        }

        name[i] = '\0';

        if (strcmp(name, "pi") == 0)
            return acos(-1.0);

        if (strcmp(name, "e") == 0)
            return exp(1.0);

        if (strcmp(name, "ans") == 0)
            return p->ans;

        skip_spaces(p);

        if (*p->input != '(')
        {
            set_error(p, "Expected function parentheses");
            return 0;
        }

        p->input++;

        double value = parse_expression(p);

        skip_spaces(p);

        if (*p->input != ')')
        {
            set_error(p, "Missing closing parenthesis");
            return 0;
        }

        p->input++;

        if (p->error)
            return 0;

        if (strcmp(name, "sqrt") == 0)
        {
            if (value < 0)
                set_error(p, "Square root of negative number");

            else
                return sqrt(value);
        }
        else if (strcmp(name, "sin") == 0)
            return sin(value);

        else if (strcmp(name, "cos") == 0)
            return cos(value);

        else if (strcmp(name, "tan") == 0)
            return tan(value);

        else if (strcmp(name, "log") == 0)
        {
            if (value <= 0)
                set_error(p, "Logarithm domain error");

            else
                return log10(value);
        }
        else if (strcmp(name, "ln") == 0)
        {
            if (value <= 0)
                set_error(p, "Natural logarithm domain error");

            else
                return log(value);
        }
        else if (strcmp(name, "abs") == 0)
            return fabs(value);

        else
            set_error(p, "Unknown function");

        return 0;
    }

    set_error(p, "Invalid character or expression");
    return 0;
}

// Save calculation history
void save_history(const char *expression, double result)
{
    if (history_count == HISTORY_SIZE)
    {
        memmove(history, history + 1,
                sizeof(History) * (HISTORY_SIZE - 1));

        history_count--;
    }

    snprintf(history[history_count].expression,
             MAX_INPUT, "%s", expression);

    history[history_count].result = result;

    history_count++;
}

// Display history
void show_history(void)
{
    if (history_count == 0)
    {
        printf("\nNo calculation history.\n");
        return;
    }

    printf("\n========== HISTORY ==========\n");

    for (int i = 0; i < history_count; i++)
    {
        printf("%d. %s = %.10g\n",
               i + 1,
               history[i].expression,
               history[i].result);
    }

    printf("=============================\n");
}

// Display help
void show_help(void)
{
    printf("\n========== HELP ==========\n");

    printf("Operators: +  -  *  /  %%  ^\n");
    printf("Parentheses: ( )\n");

    printf("\nFunctions:\n");
    printf("sqrt(x)  - Square root\n");
    printf("sin(x)   - Sine (radians)\n");
    printf("cos(x)   - Cosine (radians)\n");
    printf("tan(x)   - Tangent (radians)\n");
    printf("log(x)   - Base 10 logarithm\n");
    printf("ln(x)    - Natural logarithm\n");
    printf("abs(x)   - Absolute value\n");

    printf("\nConstants:\n");
    printf("pi, e, ans\n");

    printf("\nCommands:\n");
    printf("history  - Show calculations\n");
    printf("help     - Show instructions\n");
    printf("exit     - Close calculator\n");

    printf("===========================\n");
}

int main(void)
{
    char input[MAX_INPUT];
    double ans = 0;

    printf("\n================================\n");
    printf("       C SCIENTIFIC CALCULATOR\n");
    printf("================================\n");

    printf("Type 'help' for instructions.\n");
    printf("Type 'exit' to close.\n");

    while (1)
    {
        printf("\nCalc > ");

        if (fgets(input, sizeof(input), stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) == 0)
            continue;

        if (strcmp(input, "exit") == 0)
        {
            printf("Calculator closed.\n");
            break;
        }

        if (strcmp(input, "help") == 0)
        {
            show_help();
            continue;
        }

        if (strcmp(input, "history") == 0)
        {
            show_history();
            continue;
        }

        Parser p = {
            .input = input,
            .error = 0,
            .message = NULL,
            .ans = ans
        };

        double result = parse_expression(&p);

        skip_spaces(&p);

        if (*p.input != '\0' && !p.error)
            set_error(&p, "Unexpected character");

        if (p.error)
        {
            printf("Error: %s\n", p.message);
            continue;
        }

        if (!isfinite(result))
        {
            printf("Error: Result is out of range.\n");
            continue;
        }

        printf("= %.10g\n", result);

        ans = result;

        save_history(input, result);
    }

    return 0;
}
