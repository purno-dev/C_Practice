#include <stdio.h>

int main()
{
    int number, count = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number <= 1)
    {
        printf("%d is not a prime number", number);
    }
    else
    {
        for (int i = 2; i <= number; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
        if (count <= 1)
        {
            printf("%d is prime", number);
        }
        else
        {
            printf("%d is not a prime", number);
        }
    }

    return 0;
}