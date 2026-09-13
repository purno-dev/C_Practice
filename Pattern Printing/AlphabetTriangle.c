#include <stdio.h>

int main(){
    int i,j,a,k;
    printf("Enter Number of Row:");
    scanf("%d", &a);
    
    for ( i=1;i<=a;i++)
    {
        k=1;
       for (int j=65;k<=i;j++)
    {

        printf("%c",(char)j);
        k++;
    } 
    printf("\n");
    }
    
}