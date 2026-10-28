/*Electricity Bill Menu: Write a C program that accepts a choice from the user: 1 for calculating a bill, 2
for displaying the tariff, and 3 for exiting. Use switch-case to perform the selected operation.
*/

#include <stdio.h>

int main()
{
    int choice;
    float unit, bill, tarif = 5.00;
    printf("---Menu---\n");
    printf("1. Calculate Bill\n");
    printf("2. Tarif\n");
    printf("3. Exit\n");
    printf("Choose One option: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter unit to calculate bill:");
        scanf("%f", &unit);
        bill = unit * tarif;
        printf("Your Bill is %.2f Taka", bill);
        break;
    case 2:
        printf("Tarif is %.2f Taka", tarif);
        break;
    case 3:
        printf("Exiting Programme");
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}