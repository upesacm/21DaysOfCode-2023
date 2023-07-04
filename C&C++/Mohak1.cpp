//                                                                         { Day 1 Programs }
//Q-1. Write a program that prompts the user to enter their name and prints "HELLO, <Name>!".
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin , name);
    cout << "HELLO : " << name << "!" << endl;
    
  return 0;
}
//Q-2. Write a program to calculate the sum of the digits of a three-digit number entered by the user.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a three-digit number : ";
    cin >> number;
    int sum = number % 10 + (number / 10) % 10 + number / 100;
    cout << "The sum of the digits is : " << sum << endl;
    
  return 0;
}
