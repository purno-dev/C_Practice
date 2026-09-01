#include <stdio.h>

int main()
{
    int  age,isStudent;
    
    printf("Enter age:");
    scanf("%d", &age);
    printf("Are you a Student?(1=YES, 0=NO):");
    scanf(" %d", &isStudent);
    printf("Ticket Price is %d", age<12 ?50:age<=17?(isStudent?80:120):(isStudent?100:200));
    return 0;
}