//Implement a function to concatenate two strings using pointers.

#include <iostream>
#include <cstring>
using namespace std;

void concatenateStrings(char* str1, char* str2, char* result) {
    
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }

    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }

    *result = '\0';
}

int main() {

    const int maxInputSize = 100;

    char str1[maxInputSize];
    cout << "Enter the first string: ";
    cin.getline(str1, maxInputSize);

    char str2[maxInputSize];
    cout << "Enter the second string: ";
    cin.getline(str2, maxInputSize);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int resultSize = len1 + len2 + 1;

    char* result = new char[resultSize];

    concatenateStrings(str1, str2, result);

    cout << "The concatenated string is: " << result << endl;

    delete[] result;

    return 0;
}
