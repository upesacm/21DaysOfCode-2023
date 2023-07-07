
//1. Write a program to print the Fibonacci series up to a given number using a for loop.

#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
int first = 0, second = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";
    cout << first << " " << second << " ";

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
