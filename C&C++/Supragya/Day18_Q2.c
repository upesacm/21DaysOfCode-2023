// Q2  Implement a function to concatenate two strings using pointers
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}
char* stringConcat(char* str1,char* str2) {
    int length1 = stringLength(str1);
    int length2 = stringLength(str2);
    int totalLength = length1 + length2;
    char* result = (char*)malloc(totalLength + 1);
    char* ptr = result;

    while (*str1 != '\0') {
        *ptr = *str1;
        ptr++;
        str1++;
    }
    while (*str2 != '\0') {
        *ptr = *str2;
        ptr++;
        str2++;
    }
    *ptr = '\0';

    return result;
}

int main() {
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }
    char* result = stringConcat(str1, str2);
    printf("Concatenated string: %s\n", result);
    free(result);
}
