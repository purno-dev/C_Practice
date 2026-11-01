/*Write a C program that takes an integer as input and uses the ternary operator to display whether the
number is even or odd.*/

#include<stdio.h>

int main ()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    (n%2==0)?
    printf("%d is Even",n):
    printf("%d is Odd",n);
    return 0;
}