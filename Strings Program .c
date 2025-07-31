#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to find string length
void findLength(char str[]) {
    printf("Length of the string: %lu\n", strlen(str));
}

// Function to check if a string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        printf("It is a Palindrome\n");
    else
        printf("It's Not a Palindrome\n");
}

// Function to copy one string to another
void copyString(char source[]) {
    char destination[100];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Function to compare two strings
void compareStrings(char str1[]) {
    char str2[100];
    getchar(); // Consume leftover newline before scanf
    printf("Enter another string to compare: ");
    scanf("%[^\n]", str2);

    if (strcmp(str1, str2) == 0)
        printf("Strings are Equal.\n");
    else
        printf("Strings are Not Equal.\n");
}

int main() {
    char str[100];
    int choice;

    printf("Enter a String: ");
    scanf(" %[^\n]", str);  // Notice the space before %[^\n] to consume leading whitespace

    do {
        printf("\n---String Master---\n");
        printf("1. Find String Length\n");
        printf("2. Check Palindrome\n");
        printf("3. Copy String\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: findLength(str); break;
            case 2: checkPalindrome(str); break; // Missing () in original code
            case 3: copyString(str); break;
            case 4: compareStrings(str); break;
            case 5: printf("Exiting....\n"); break;
            default: printf("Invalid choice. Try again.\n"); // Corrected "defult" typo
        }

    } while (choice != 5);

    return 0;
}
