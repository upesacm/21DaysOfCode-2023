#include <iostream>

using namespace std;

// Function to concatenate two strings using pointers
char* concatenateStrings(const char* str1, const char* str2) {
    int len1 = 0;
    while (str1[len1] != '\0')
        len1++;

    int len2 = 0;
    while (str2[len2] != '\0')
        len2++;

    // Allocate memory for the concatenated string (+1 for the null terminator)
    char* result = new char[len1 + len2 + 1];

    // Copy the characters from the first string
    for (int i = 0; i < len1; i++)
        result[i] = str1[i];

    // Copy the characters from the second string
    for (int i = 0; i < len2; i++)
        result[len1 + i] = str2[i];

    // Null-terminate the concatenated string
    result[len1 + len2] = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    
    // Call the function to concatenate the strings using pointers
    char* concatenated = concatenateStrings(str1, str2);

    // Display the concatenated string
    cout << "Concatenated string: " << concatenated << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] concatenated;

    return 0;
}
