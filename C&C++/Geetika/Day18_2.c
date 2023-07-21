// 2. Implement a function to concatenate two strings using pointers.

#include <stdio.h>
#include <stdlib.h>

void concatenateStrings(char *str1, const char *str2) {
    char *p1 = str1;
    const char *p2 = str2;

    while (*p1)
        p1++;

    while (*p2) {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
