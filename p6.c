/*1: Write a C program that takes a student's age as input and uses the ternary operator to determine
whether the student is eligible for a student discount (age less than or equal to 25).*/
#include<stdio.h>

int main ()
{
    int age;
    printf("Enter Student Age:");
    scanf("%d",&age);
    (age<=25)?
    printf("Eligable for student Discount"):
    printf("Not eligable for Student Discount");
    return 0;
}