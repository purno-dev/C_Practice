#include <stdio.h>

int main(){
    int col,row;
    printf("Enter Number of Colummn:");
    scanf("%d", &col);
    printf("Enter Number of Row:");
    scanf("%d", &row);
    for (int i=1;i<=row;i++)
    {
       for (int i=1;i<=col;i++)
    {
        printf("* ");
    } 
    printf("\n");
    }
}