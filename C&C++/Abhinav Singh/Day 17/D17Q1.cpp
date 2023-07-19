#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str) {
  int n = str.length();
  for (int i = 0; i < n / 2; i++) {
    if (str[i] != str[n - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string str = "racecar";
  if (is_palindrome(str)) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }
  return 0;
}
