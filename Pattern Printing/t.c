#include <stdio.h>

int main()
{
    int i, j, jj, k, l, n, nsp;

    printf("Enter number of Row: ");
    scanf("%d", &n);

    nsp = n - 1;

    for (i = 1; i <= n; i++)
    {
        jj = 65;

        // Space
        for (k = 1; k <= nsp; k++)
        {
            printf("  ");
        }

        nsp--;

        // Increasing alphabet
        for (j = 1; j <= i; j++)
        {
            printf("%c ", (char)jj);
            jj++;
        }

        // Decreasing alphabet
        jj -= 2;

        for (l = 1; l <= i - 1; l++)
        {
            printf("%c ", (char)jj);
            jj--;
        }

        printf("\n");
    }

    return 0;
}