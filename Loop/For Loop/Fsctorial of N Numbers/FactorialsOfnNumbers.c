#include <stdio.h>

int main()
{
    int n, f = 1;
    printf("Enter Number get factorial:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
        printf("\n%d", f);
    }
    
}