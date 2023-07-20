#include <iostream>
#include <cstring> 
using namespace std;

char* concatenateStrings(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char* result = new char[len1 + len2 + 1]; 


    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }


    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }


    result[len1 + len2] = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    char* concatenated = concatenateStrings(str1, str2);
    cout << "Concatenated string: " << concatenated << endl;

    delete[] concatenated;

    return 0;
}
