#include <stdio.h>

int main()
{
    int i, a, k;
    printf("Enter Number of Row:");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        k = 1;
        if (i % 2 == 0)
        {
            for (int j = 65; k <= i; j++)
            {

                printf("%c", (char)j);
                k++;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {

                printf("%d", j);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}