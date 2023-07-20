#include <iostream>
#include <cstring> 

using namespace std;

void concatenateStrings(char* dest, const char* src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    const int maxStringLength = 100;
    char str1[maxStringLength] = "Hello, ";
    const char* str2 = "world!";

    concatenateStrings(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
