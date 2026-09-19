#include <stdio.h>

int main(){
    int a;
    printf("Enter Number of Colummn:");
    scanf("%d", &a);
    int k=a;
    for (int i=1;i<=a;i++)
    {
           for (int i=1;i<=k;i++)
    {
        printf("  ");
    }
       for (int i=1;i<=a;i++)
    {
        printf("* ");
    } 
    printf("\n");
    k--;
    }
    return 0;
}