#include <stdio.h>

int main ()
{
    int number;
    printf("Enter a Number:");
    scanf("%d", &number);
    if(number>0)
    {
        printf("%d is a Poisitve number and",number);
    }
    else {
        printf("%d is a Negative number and",number);
    }
    if(number%2==0)
    {
        printf(" %d is a Even number and",number);
    }
    else {
        printf(" %d is a Odd number and",number);
    }

    return 0;
    
    
    
}