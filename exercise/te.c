#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Balance Check\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Balance: 5000 Tk\n"); break;
            case 2: printf("Deposit done!\n"); break;
            case 3: printf("Withdraw done!\n"); break;
            case 4: printf("Bye!\n"); break;
            default: printf("Invalid choice!\n"); break;
        }
    } while (choice != 4);  // 4 না দেওয়া পর্যন্ত চলবে

    return 0;
}
