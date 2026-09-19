#include <stdio.h>

int main()
{
    int a, i, j, k;
    printf("Enter Number:");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {   k=1;
        for (j = 1; k <=i; j++)
        {
            if (j % 2 != 0)
            {

                printf("%d", j);
                k++;
            }
        }

        printf("\n");
    }
    return 0;
}