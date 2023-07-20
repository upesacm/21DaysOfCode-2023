#include <iostream>

using namespace std;

void concatenateStrings(char* destination, const char* source) {

    while (*destination)
        destination++;


    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

int main() {
    const int maxBufferSize = 100; 
    char str1[maxBufferSize];
    char str2[maxBufferSize];

    cout << "Enter the first string: ";
    cin.getline(str1, maxBufferSize);

    cout << "Enter the second string: ";
    cin.getline(str2, maxBufferSize);

    concatenateStrings(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}

