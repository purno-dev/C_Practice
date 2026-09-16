#include <stdio.h>

int main()
{
    int a, i, j, k;
    printf("Enter Number of Row:");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        k = 1;
        for (int j = 1; j <= a; j++)
        {

            if (i==a/2+1 || j==a/2+1)
                {
                    printf("* ");
                }
            else {
                    printf("  ");
                }
            k++;
        }
        printf("\n");
    }
}