#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00f, amount;

    while (1) {
        printf("\n=========== ATM Menu ===========\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Your balance is: Rs %.2f\n", balance);
                break;

            case 2:
                printf("Enter the deposit amount: ");
                if (scanf("%f", &amount) != 1 || amount < 0) {
                    printf("Invalid amount. Please enter a positive number.\n");
                } else {
                    balance += amount;
                    printf("Deposited Rs %.2f. New balance: Rs %.2f\n", amount, balance);
                }
                break;

            case 3:
                printf("Enter the withdrawal amount: ");
                if (scanf("%f", &amount) != 1 || amount < 0) {
                    printf("Invalid amount. Please enter a positive number.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance—available: Rs %.2f\n", balance);
                } else {
                    balance -= amount;
                    printf("Withdrew Rs %.2f. New balance: Rs %.2f\n", amount, balance);
                }
                break;

            case 4:
                printf("Thank you! Goodbye.\n");
                return 0;

            default:
                printf("Invalid choice. Please choose a number from 1 to 4.\n");
        }

        // Clear leftover characters in stdin to avoid infinite loops
        while (getchar() != '\n');
    }

    return 0;
}
