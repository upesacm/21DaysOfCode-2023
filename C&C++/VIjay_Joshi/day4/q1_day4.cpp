/*1. Write a program to determine the type of a triangle based on the lengths of its sides 
and print the result (e.g., equilateral, isosceles, scalene). Take the input of the length of sides from the User.
*/
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;

    cout << "lengths of the three ss of the triangle ";
    cin >> s1;
     cin >> s2;
    cin >> s3;

    if (s1 == s2 && s2 == s3) {
        cout << "The triangle is equilateral." << endl;
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}

