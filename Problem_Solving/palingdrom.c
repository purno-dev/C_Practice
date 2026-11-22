#include <stdio.h>

int main()
{
    long long int tempumber, number, reverse = 0, last_digit = 0;
    printf("Enter a number:");
    scanf("%lld", &number);
    tempumber = number;
    while (number != 0)
    {
        last_digit = number % 10;
        reverse = (reverse + last_digit) * 10;
        number /= 10;
    }
    reverse /= 10;
    if (reverse == tempumber)
    {
        printf("%lld is a plaindrom number!", tempumber);
    }
    else
    {
        printf("%lld is not a plaindrom number!", tempumber);
    }
    return 0;
}