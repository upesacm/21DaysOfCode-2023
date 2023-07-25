#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "Enter the number of elements in the array (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (cin.fail() || n <= 0 || n > MAX_SIZE) {
        cout << "Invalid input. Please enter a valid number of elements." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (cin.fail()) {
            cout << "Invalid input. Please enter valid integers." << endl;
            return 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
