#include <stdio.h>

int main(){
    int a,i,j;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    
    for (i=1;i<=a;i++)
    {
        
       for (int j=1;j<=a+1-i;j++)
    {    
        printf("%d",j);
        
    } 
    printf("\n");
    
    }
}