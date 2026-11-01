/*Write a C program that accepts a positive integer and displays its reverse using a
while loop.*/

#include <stdio.h>

int main()
{ int num,lastDigit,reverse=0;
    printf("Enter Number:");
    scanf("%d",&num);
    while (num!=0)
    {
        lastDigit=num%10;
        
        reverse=reverse*10+lastDigit;
        num=num/10;
    }
    printf("%d",reverse);
    return 0;

}
