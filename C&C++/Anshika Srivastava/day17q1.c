//Implement a program to check if a given string is a palindrome using string functions.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int i, j;
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';
    if (strcmp(str, rev) == 0) 
    printf("The string is a palindrome.\n");
    else 
    printf("The string is not a palindrome.\n");
    return 0;
}
