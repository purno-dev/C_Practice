#include <stdio.h>

int main()
{
    int num1, num2;
    float result;
    char choice;
    printf("Welcome to C Calculator\n");
    printf("Enter First Number:");
    scanf(" %d", &num1);
    printf("Enter Second Number:");
    scanf(" %d", &num2);
    printf("Choose a operation (+,-,*,/):");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %.2f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %.2f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %.2f", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = (float)num1 / num2;
            printf("%d / %d = %.2f", num1, num2, result);
        }
        printf("Can't Divide %d by Zero", num1);
        break;
    default:
        printf("Invaild Choice!");
        break;
    }
}


