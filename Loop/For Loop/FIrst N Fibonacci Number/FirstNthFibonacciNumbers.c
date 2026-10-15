#include <stdio.h>

int main()
{
    int n,a,b,c;
    a=0;
    b=1;

    printf("Enter Number get Fibonaci:");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        
    }
    
}