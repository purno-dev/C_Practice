#include <stdio.h>

int main ()
{
    long long int number,count=0;
    printf("Enter a digit to count number:");
    scanf("%lld", &number);
    while (number!=0)
    {
        number/=10;
        count++;
    }
    printf("%d",count);
    return 0;
}