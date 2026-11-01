/*A parking lot has 75 available spaces. When a car enters, the number of available spaces decreases by
one. Write a C program using the appropriate decrement operator.*/

#include<stdio.h>

int main ()
{
    int space_available=75;

    space_available--;
    printf("Space Available %d",space_available);
    return 0;
}
