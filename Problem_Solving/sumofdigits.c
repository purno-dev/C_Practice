#include <stdio.h>

int main ()
{
    long long int number,sum=0,last_digit=0;
    printf("Enter a number:");
    scanf("%lld", &number);
    while (number!=0)
    {
        last_digit=number%10;
        sum+=last_digit;
        number/=10;
    }
    printf("%lld",sum);
    return 0;

}