#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (cin.fail() || n <= 0) {
        cout << "Invalid input. Please enter a positive integer greater than zero." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
