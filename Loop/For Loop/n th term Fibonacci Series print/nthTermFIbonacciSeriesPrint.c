#include <stdio.h>

int main()
{
    int n,a,b,c;
    a=1;
    b=1;

    printf("Enter Number get Fibonaci:");
    scanf("%d", &n);
    for (int i = 1; i <= n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}