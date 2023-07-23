#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer for the number of elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
