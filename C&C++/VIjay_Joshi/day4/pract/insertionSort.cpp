#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the values of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = 0;

        while (key < arr[i - 1 - j] && j < i) {
            arr[i - j] = arr[i - 1 - j];
            j++;
        }
        arr[i - j] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
