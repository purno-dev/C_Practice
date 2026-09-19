#include <stdio.h>

int main(){
    int a,i,j,z;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    z=65;
    for (i=1;i<=a;i++)
    {
       for (j=1;j<=a-i;j++)
    {
        printf("  ");
    } 
     for (j=1;j<=i;j++)
    {
        
        printf("* ");
    } 
    printf("\n");
    }
    return 0;
}