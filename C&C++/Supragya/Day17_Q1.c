// Q1 Implement a program to check if a given string is a palindrome using string functions.
#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
