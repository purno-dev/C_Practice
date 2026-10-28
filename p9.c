/*Day of the Week: Write a C program that accepts an integer from 1 to 7 and uses a switch-case*/

#include<stdio.h>

int main ()
{
    int day;
     printf("Enter Number of day:");
     scanf("%d",&day);

     switch (day){
        case 1: printf("Sunday");
        break;
        case 2: printf("Monday");
        break;
        case 3: printf("Tuesday");
        break;
        case 4: printf("Wednesday");
        break;
        case 5: printf("Thursday");
        break;
        case 6: printf("Friday");
        break;
        case 7: printf("Saturday");
        break;
        default: printf("Invaild Number of Day!");
        break;
     }
     return 0;
}