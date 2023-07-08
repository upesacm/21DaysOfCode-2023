//                                                                     {Day-6 Programs}
//Q-1 = Write a C/C++ program to find the second smallest element in an integer array.
#include <iostream>
#include <limits> //for managing and evaluating max and min values of several integer [data types]
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int smallest = numeric_limits<int>::max(); //just to retrieve the maximum value that can be stored in an int
    int secondSmallest = numeric_limits<int>::max(); //just to retrieve the maximum value that can be stored in an int

    for (int i = 0; i < 5; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    } if (secondSmallest == numeric_limits<int>::max()) {
        cout << "There is no second smallest element in the array." << endl;
    } else {
        cout << "The second smallest element in the array is : " << secondSmallest << endl;
    }

    return 0;
}
//Q-2 = Write a C/C++ program to sort an integer array in ascending order using a sorting algorithm (e.g., bubble sort, insertion sort).
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size);
int main() {
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, size);

    cout << "Array after sorting in ascending order : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

