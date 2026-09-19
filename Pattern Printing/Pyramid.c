#include <stdio.h>

int main(){
    int a,i,j,z;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    
    for (i=1;i<=a;i++)
    {   z=1;

       for (j=1;j<=a-i;j++)
    {
        printf("  ");
    } 
     for (j=1;z<=i*2-1;j+=2)
    {
        
        printf("* ");
        z++;
    } 
    printf("\n");
    
    }
}