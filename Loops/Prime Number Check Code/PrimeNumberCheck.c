#include <stdio.h>
#include <stdbool.h>
int main()
{   int n;
    printf("Enter Number to see if it is Prime or not:");
    scanf("%d", &n);
    bool ISnotPrime = false;
    for (int i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            
            ISnotPrime = true;
            break;
        }
       
        
    }
    if (!ISnotPrime)
    {
        printf("%d is a Prime Number",n);
    }
    else {
        printf("%d is a Composite Number",n);
    }
   
}