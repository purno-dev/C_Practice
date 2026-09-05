#include <stdio.h>

int main()
{
    long int a, reverse = 0, lastDigits;
    printf("Enter Number to to get reverse Digits:");
    scanf("%d", &a);

    while (a > 0)
    {
        reverse = reverse * 10;
        reverse = reverse + (a % 10);

        a = a / 10;
    }

    printf("Reverse Digits %d", reverse);
}