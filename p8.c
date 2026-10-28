/*Write a C program that takes a student's marks as input and uses a
switch-case statement to display the result category: 80–100: Excellent; 70–79: Very Good; 60–69: Good;
50–59: Pass; below 50: Fail.*/

#include<stdio.h>

int main ()
{
    int mark;
    printf("Enter your mark:");
    scanf("%d",&mark);
    if (mark<0 || mark>100)
    {
        printf("Invalid Mark!");
        return 0;
    }

    switch (mark/10) 
    {
        case 10:
        case 9:
        case 8: printf("Excelent");
        break;
        case 7: printf("Very Good");
        break;
        case 6: printf("Good");
        break;
        case 5: printf("Pass");
        break;
        default: printf("Fail");
        break;
        

    }
    return 0;
}