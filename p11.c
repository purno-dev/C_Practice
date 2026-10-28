/*Write a C program that repeatedly asks the user to enter a four-digit PIN until the
correct PIN is entered. Display a confirmation message after successful verification.*/

#include<stdio.h>

int main ()
{
    int correct_pin=1234, pin;
    while (pin!=correct_pin)
    {
        printf("Enter Pin:");
        scanf("%d",&pin);

        if (pin!=correct_pin)
        {
            printf("Invalid PIN\n");
        }
    }   
    printf("Verification Successfull!");
    return 0;
}