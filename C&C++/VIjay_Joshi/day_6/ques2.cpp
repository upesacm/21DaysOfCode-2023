#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {

    int size ;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the elements in array ";
    int arr[size];
      for (int i = 0; i < size; i++) {
       cin>> arr[i];
    }

    bubbleSort(arr, size);

    cout << "Sorted  ascending order: ";
  for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
