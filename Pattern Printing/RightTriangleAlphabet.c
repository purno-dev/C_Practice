#include <stdio.h>

int main(){
    int a,i,j,z;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    
    for (i=1;i<=a;i++)
    {   z=65;
       for (j=1;j<=a-i;j++)
    {
        printf("  ");
    } 
     for (j=1;j<=i;j++)
    {
        
        printf(" %c",z);
        z++;
    } 
    printf("\n");
    }
    return 0;
}