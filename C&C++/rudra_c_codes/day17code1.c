#include <stdio.h>
#include <string.h>

int isPalindrome(char string[]) {
    int length = strlen(string);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (string[start] != string[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove newline character from input

    if (isPalindrome(string)) {
        printf("%s is a palindrome.\n", string);
    } else {
        printf("%s is not a palindrome.\n", string);
    }

    return 0;
}
