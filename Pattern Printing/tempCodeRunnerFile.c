#include <stdio.h>

int main(){
    int a,i,j;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    
    for (i=0;i<=a;i++)
    {
       for (int j=1;j<=i+1;j++)
    {
        printf("* ");
    } 
    printf("\n");
    }
}