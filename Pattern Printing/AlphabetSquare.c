#include <stdio.h>

int main(){
    int a,k;
    printf("Enter Number of Row:");
    scanf("%d", &a);
    
    for (int i=1;i<=a;i++)
    {
        k=1;
       for (int i=65;k<=a;i++)
    {

        printf("%c",(char)i);
        k++;
    } 
    printf("\n");
    }
    
}