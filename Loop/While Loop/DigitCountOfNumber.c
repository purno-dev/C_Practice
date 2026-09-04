#include <stdio.h>

int main(){
    int a,count=0,temp;
    printf("Enter Number to count Digits:");
    scanf("%d", &a);
    temp=a;
    while (a>0)
        {
            a=a/10;
            count++;
            // printf("Number of digits in %d is %d",a,count);
        }
    
    printf("Number of digits in %d is %d",temp,count);
}