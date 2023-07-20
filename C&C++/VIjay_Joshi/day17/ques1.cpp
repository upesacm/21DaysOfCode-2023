#include <bits/stdc++.h>

using namespace std;

bool isPalindrome( string str) {
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    return str == revStr;
}

int main() {
    string input;
    cout << "Enter string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is palindrome." << endl;
    } else {
        cout << "The string not a palindrome." << endl;
    }

    return 0;
}
