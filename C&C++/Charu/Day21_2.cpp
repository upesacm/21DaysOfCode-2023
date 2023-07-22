#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Please enter a positive size for the array." << endl;
        return 1;
    }

    int arr[size];

    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
