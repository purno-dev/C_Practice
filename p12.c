/*Numbers: Write a C program that accepts a positive integer n and calculates the sum of
all even numbers from 1 to n using a while loop.*/

#include<stdio.h>

int main ()
{
    int n,count=0,sum=0;
    printf("Enter a positive number:");
    scanf("%d",&n);

    while (count!=n)
    {

        count++;
        if (count%2==0)
        {
            sum = sum+count;
        }

    }
    printf("%d",sum);
    return 0;
}