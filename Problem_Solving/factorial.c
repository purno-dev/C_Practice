#include <stdio.h>

int main ()
{
    int n,product=1;
    printf("Enter a number to see factorial:");
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        product*=i;
    }
    printf("%d",product); 
    return 0;
}