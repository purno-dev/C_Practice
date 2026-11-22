#include <stdio.h>

int main ()
{
    int n,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        product=n*i;
        printf("%d x %d = %d\n", n,i,product);
        
    }
return 0;
}