/*Write a C program that takes two numbers and a mathematical operator (+, -, *, /) as input. Use
switch-case to calculate the result and display an appropriate message for invalid operators or division by zero.*/
#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;
    printf("Enter Operator:");
    scanf("%c", &op);
    printf("Enter two number:");
    scanf("%f %f", &num1, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f*%.2f= %.2f", num1, num2, result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division by zero not possible!");
        }
        result = num1 / num2;
        printf("%.2f/%.2f=%.2f", num1, num2, result);
        break;
    default:
        printf("Invaild Operator!");
        break;
    }
    return 0;
}