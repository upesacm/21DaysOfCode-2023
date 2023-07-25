#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (cin.fail() || n <= 0) {
        cout << "Invalid input. " << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (cin.fail()) {
            cout << "Invalid input.." << endl;
            return 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements : " << sum << endl;

    return 0;
}
