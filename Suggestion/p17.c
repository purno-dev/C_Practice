/*Write a C program that counts how many odd digits are present in a positive integer
using a while loop.*/

#include<stdio.h>

int main ()
{
    int num,lastDigit,count=0;

    printf("Enter Number:");
    scanf("%d",&num);

    while (num!=0)
    {
        lastDigit=num%10;
        if(lastDigit%2!=0)
        {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);
}