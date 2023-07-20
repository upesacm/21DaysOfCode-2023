#include <stdio.h>
#include <stdlib.h>

// Function to concatenate two strings using pointers
char* concatenateStrings(const char* str1, const char* str2) {
    // Calculate the lengths of the input strings
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    // Allocate memory for the concatenated string
    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    // Copy the first string into the result
    char* ptr = result;
    while (*str1 != '\0') {
        *ptr++ = *str1++;
    }

    // Copy the second string into the result
    while (*str2 != '\0') {
        *ptr++ = *str2++;
    }

    // Add null terminator to the end of the concatenated string
    *ptr = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    
    // Concatenate strings using the function
    char* result = concatenateStrings(str1, str2);

    // Print the result
    printf("Concatenated string: %s\n", result);

    // Remember to free the dynamically allocated memory
    free(result);

    return 0;
}
