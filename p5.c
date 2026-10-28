/*A program must display a menu at least once before asking the user whether to continue. Explain why
a do-while loop is suitable and demonstrate it with a C program.*/

#include<stdio.h>

int main ()
{
    int choice,repeat_choice;
    do{
        
    printf("___Menu___\n");
    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("You Ordered Tea\n");
    }
    else if (choice==2)
    {

        printf("You Ordered Coffee\n");
    }
    else{
        printf("Invalied Choice\n");
    }
    printf("Want to ordered again?:\n");
    printf("(1=Yes 2=No):");
    scanf("%d",&repeat_choice);
    }while(repeat_choice==1);
    printf("Thanks for visitng us!!");

    return 0;

}

/*Here in this piece of code we can see that this is a menu of a cafeteria. The menu has to apear atleast one whether the condition is true or false otherwise the customer can't select their prefered beverage. Here the do while loop is suitable because the code execute at least one whether the codition is true or false*/