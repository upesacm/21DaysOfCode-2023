#include <iostream>

using namespace std;

char* concatStrings(const char* str1, const char* str2) {
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    char* result = new char[len1 + len2 + 1];

    int i = 0;
    for (; i < len1; i++) {
        result[i] = str1[i];
    }

    for (int j = 0; j < len2; j++, i++) {
        result[i] = str2[j];
    }

    result[i] = '\0';

    return result;
}

int main() {
    const char* str1 = "Hello, how are ";
    const char* str2 = "you ?";
    
    char* concat = concatStrings(str1, str2);
    cout << "Concatenated string: " << concat<< endl;
    delete[] concat;

    return 0;
}
