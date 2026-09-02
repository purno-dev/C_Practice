#include <stdio.h>

int main()
{   int n;
    printf("Enter Number for see Table:");
    scanf("%d", &n);
    
    for (int i=1;i<=10;i++)
    {
        int ans=n*i;
        printf("19 X %d = %d\n",i,ans);
    }
}