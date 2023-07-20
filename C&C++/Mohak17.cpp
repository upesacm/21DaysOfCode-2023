//                                                           {Day-17 Programs}
//Q-1 = Implement a program to check if a given string is a palindrome using string functions.
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str);
int main() {
    string input;

    cout << "Enter a string : ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome!" << endl;
    }
return 0;
}
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
//Q-2 = Create a program to split a sentence into words and count the number of words using string functions.
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int countWords(const string& sentence);
int main() {
    string input;
    cout << "Enter a sentence : ";
    getline(cin, input);

    int wordCount = countWords(input);
    cout << "Number of words in the sentence : " << wordCount << endl;
return 0;
}
int countWords(const string& sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }
return count;
}
