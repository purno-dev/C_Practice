//Discount Calculator

#include <stdio.h>

int main()
{
    float orderAmount,discountAmount;
    char memberShip;
    printf("Enter Order Amount for Discount:");
    scanf("%f", &orderAmount);
    printf("Enter Membership Status 'G' for Gold, 'S' for Silver, 'N' for Normal:");
    scanf(" %c", &memberShip);
    if (orderAmount>=1000)
        {
            if(memberShip=='G')
                {
                discountAmount=orderAmount-(orderAmount*25/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='S')
                {
                discountAmount=orderAmount-(orderAmount*15/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='N')
                {
                discountAmount=orderAmount-(orderAmount*5/100);
                printf("%.2f",discountAmount);
                }
            else {
                printf("Invaild Input");
            }

        }
        else if (orderAmount>=500 && orderAmount<=999)
            {
                if(memberShip=='G')
                {
                discountAmount=orderAmount-(orderAmount*15/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='S')
                {
                discountAmount=orderAmount-(orderAmount*10/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='N')
                {
                discountAmount=orderAmount-(orderAmount*3/100);
                printf("%.2f",discountAmount);
                }
            else {
                printf("Invaild Input");
            }
                
            }
            else
            {
                if(memberShip=='G')
                {
                discountAmount=orderAmount-(orderAmount*5/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='S')
                {
                discountAmount=orderAmount-(orderAmount*2/100);
                printf("%.2f",discountAmount);
                }
            else if (memberShip=='N')
                {
                discountAmount=orderAmount;
                printf("%.2f",discountAmount);
                }
            else {
                printf("Invaild Input");
            }
            }



    return 0;
}