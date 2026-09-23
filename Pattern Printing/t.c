#include <stdio.h>

int main()
{
    int i, j, k, l, n, a,nsp;
    printf("Enter number of Row:");
    scanf("%d", &n);
    
    for (i = 1;  i <= n; i++)
    {
        
         a=i-1;
        
        for (l = 1; l<=i-1; l++)
        {
            printf("%d",a);
            a--;
        }

        printf("\n");
        
    }
    return 0;
}