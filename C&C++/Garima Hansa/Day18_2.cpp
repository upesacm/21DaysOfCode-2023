// 2. Implement a function to concatenate two strings using pointers.

#include <iostream>
using namespace std;

char *concatenateStrings(char *str1, char *str2)
{
    // Calculate the lengths of the strings
    int len1 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    int len2 = 0;
    while (str2[len2] != '\0')
    {
        len2++;
    }

    int totalLength = len1 + len2 + 1;
    char *concatenatedString = new char[totalLength];
    for (int i = 0; i < len1; i++)
    {
        concatenatedString[i] = str1[i];
    }
    for (int i = 0; i < len2; i++)
    {
        concatenatedString[len1 + i] = str2[i];
    }

    concatenatedString[totalLength - 1] = '\0';

    return concatenatedString;
}

int main()
{

    char input1[120];
    char input2[120];
    cout << "Enter String1: " << endl;
    cin.getline(input1, sizeof(input1));
    cout << "Enter String2: " << endl;
    cin.getline(input2, sizeof(input2));

    cout << "Current Strings: " << endl
         << "String1: " << input1 << endl
         << "String2: " << input2 << endl;

    char *ptr1 = input1;
    char *ptr2 = input2;

    char *final = concatenateStrings(ptr1, ptr2);

    cout << "The strings after concatination is: " << final << endl;

    return 0;
}
