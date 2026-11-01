/*Write a C program that accepts a positive integer and counts the total number of
digits using a while loop.*/

#include<stdio.h>

int main ()
{
    int n,count=0;
    printf("Enter a positive number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count ++;

    }
    printf("Number of digits is %d",count);
    return 0;
}