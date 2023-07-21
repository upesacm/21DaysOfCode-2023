
//2. Implement a function that takes an array of integers and its size as parameters. The function should rearrange the array in such a way that all the negative numbers appear before
//     the positive numbers while preserving the relative order of the negative and positive numbers.



#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int n ) {
    int i = 0; 

    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            if (i != j) {
                
                swap(arr[i], arr[j]);
            }
            i++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    rearrangeArray(arr, size);

    cout << "Rearranged array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
