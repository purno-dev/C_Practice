#include <stdio.h>

int main()
{
    int i, a, k=1;
    printf("Enter Number of Row:");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
    

        for (int j = 1; j <= i; j++)
        {

            printf("%d",k);
            k++;
        }

        printf("\n");
    }
    return 0;
}