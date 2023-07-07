//Write a program to print the Fibonacci series up to a given number using a for loop

#include <iostream>
using namespace std;

int main() {

    int a=0, b=1, nextTerm, n;
    cout << "Enter the number upto which the fibonacci series has to be printed: ";
    cin >> n;

    cout << "The fibonacci series is: " << endl;
    cout << a << " " << b << " ";

    //assuming that the number is inclusive
    for (nextTerm = 1; nextTerm <= n; nextTerm = a+b) {

        cout << nextTerm << " ";
        a = b;
        b = nextTerm;

    }

    return 0;
}
