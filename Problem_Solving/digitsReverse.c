#include <stdio.h>

int main()
{
    long long int number, reverse = 0, last_digit = 0;
    printf("Enter a number:");
    scanf("%lld", &number);
    while (number != 0)
    {
        last_digit = number % 10;
        reverse = (reverse + last_digit )* 10;
        number /= 10;
        
    }
    reverse /= 10;
    printf("Reverse of  is %d", reverse);
    return 0;
}