//Q-1 = Implement a C/C++ program that takes input from the user and generates the multiplication table of the given number up to 10, 
//and displaying the results in a well-formatted manner , 
//also ensure the program handles different edge cases gracefully and provides appropriate feedback to the user when needed.
#include <iostream>
using namespace std;
int main() {
    int number;
do {
        cout << "Enter a positive integer : ";
    } while (!(cin >> number) || number <= 0);

    cout << "Multiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
 return 0;
}
//Q-2 = Write a program that takes an array of integers as input and calculates the sum of all elements in the array.
#include <iostream>
using namespace std;
int main() {
    int n;
do {
        cout << "Enter the size of the array (a positive integer) : ";
    } while (!(cin >> n) || n <= 0);

    int arr[n];
    cout << "Enter " << n << " integers :" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
cout << "Sum of all elements in the array: " << sum << endl;
return 0;
}
