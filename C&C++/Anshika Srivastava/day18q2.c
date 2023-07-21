// Implement a function to concatenate two strings using pointers.
#include <stdio.h>
#include <stdlib.h>
void concat(char *dest, const char *src) {
    while (*dest)
        dest++;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[100];
    char str2[50];
    printf("Enter the first string\n ");
    gets(str1);
    printf("Enter the second string\n ");
    gets(str2);
    concat(str1, str2);
    printf("Concatenated string %s\n", str1);
    return 0;
}
