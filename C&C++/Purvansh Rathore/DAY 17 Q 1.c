#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(const char *input_string) {
    // Find the length of the input string
    int len = strlen(input_string);

    // Create a new string to store the cleaned string (without spaces and in lowercase)
    char cleaned_string[len + 1]; // +1 for the null terminator
    int j = 0;

    for (int i = 0; i < len; i++) {
        // Convert each character to lowercase and skip spaces
        if (!isspace(input_string[i])) {
            cleaned_string[j] = tolower(input_string[i]);
            j++;
        }
    }

    cleaned_string[j] = '\0'; // Add null terminator to the cleaned string

    // Compare the original and reversed strings
    int left = 0;
    int right = j - 1;

    while (left < right) {
        if (cleaned_string[left] != cleaned_string[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // It's a palindrome
}

int main() {
    char user_input[100];
    printf("Enter a string: ");
    fgets(user_input, sizeof(user_input), stdin);

    // Remove the trailing newline character from user_input
    int len = strlen(user_input);
    if (user_input[len - 1] == '\n') {
        user_input[len - 1] = '\0';
    }

    if (is_palindrome(user_input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
