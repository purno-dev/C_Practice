#include <stdio.h>

int main()
{
    int  iAmInnocent,aIsGuilty,age;
    
    printf("Statemet of A (1 = Not Guilty, 0 = Guilty):");
    scanf("%d", &iAmInnocent);
    printf("Statemet of B (1 = Guilty, 0 = Not Guilty):");
    scanf(" %d", &aIsGuilty);
    printf("Age of C:");
    scanf(" %d", &age);
    if (iAmInnocent && !aIsGuilty)
        {
            printf("Dujon e mile conspiracy korche!");
        }
    else if (!iAmInnocent)
        {
            printf("A surrendered! Case closed.");
        }
    else {
        age>=18?printf("C is adult witness, B might be right"):printf("C is minor, unreliable case");
    }
    return 0;
}