#include <stdio.h>

int main(){
    int a,i,j,z,y;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    
    for (i=1;i<=a;i++)
    {   z=1;
        y=65;
       for (j=1;j<=a-i;j++)
    {
        printf("  ");
    } 
     for (j=1;z<=i*2-1;j+=2)
    {
        
        printf("%C ",y);
        y++;
        z++;
    } 
    printf("\n");
    
    }
    return 0;
}