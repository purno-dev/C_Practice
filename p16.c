/*Write a C program that calculates and displays the product of the digits of a positive
integer using a while loop.*/

#include<stdio.h>

int main ()
{
    int num,LastDigit,Product=1;
    printf("Enter a Number:");
    scanf("%d",&num);
   if (num<0)
   {
    printf("Enter Positive Number");
    return 0;
   }
    while (num!=0)
    {
        LastDigit=num%10;
        Product=Product*LastDigit;
        num=num/10;
    }
    printf("Product %d",Product);
    return 0;
}