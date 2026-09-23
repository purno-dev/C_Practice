#include <stdio.h>

int main()
{
    int i, j,jj,k, l, n, a,nsp;
    printf("Enter number of Row:");
    scanf("%d", &n);
    nsp=n-1;
    for (i = 1;  i <= n; i++)
    {
        jj=65;
        a = 65 + i - 2;
         for (k = 1; k<=nsp; k++)
        {
            printf("  ");
            
        }
        nsp--;
        for (j = 1; j<=i; j++)
        {
            printf("%c ", (char) jj);
            jj++;
        }
        for (l = 1; l<=i-1; l++)
        {
            // printf("%d ",a);
            printf("%c ", (char) a);
            a--;
        }

        printf("\n");
        
    }
    return 0;
}