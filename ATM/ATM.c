#include <stdio.h>

int main()
{
    int pin,choice;
    float balance,Withdraw,curentBalance,deposit;
    int correctPIN=1234;
    
    printf("Enter Your PIN:");
    scanf("%d", &pin);
    printf("Enter Your Current Balance:");
    scanf("%f", &curentBalance);
    if (pin==correctPIN)
        {
        printf("Menu: \n1.Balance Check\n2.Withdraw\n3.Deposit\nChoose One:");
        scanf("%d", &choice);

        if (choice==2)
            {
                printf("Enter Amount for Withdraw:");
                scanf("%f", &Withdraw);
                if (curentBalance>=Withdraw && Withdraw>0)
                    {
                        balance=curentBalance-Withdraw;
                        printf("Your Balance After Withdraw is:%.2f taka",balance);
                    }
                else {
                    printf("Insufficiant Ballance, Your ballance is %.2f taka",curentBalance);
                }
            }
        else if (choice==1)
            {
                printf("Your Balance id %.2f taka",curentBalance);
            }
        else if (choice==3)
            {
                printf("Enter Amount for Deposit:");
                scanf("%f", &deposit);
                if (deposit>0)
                    {
                         balance=curentBalance+deposit;
                printf("Your Balance After %.2f taka Deposit is:%.2f taka",deposit, balance);
                    }
                else {
                    printf("Invailed Amount");
                }
               
            }
        
            else {
                choice>3||choice<1?printf("Invailed Choice"):printf("Invailed Choice");
            }
        
        }
    else {
        printf("Your PIN is incorrect");
    }
    

    return 0;
}