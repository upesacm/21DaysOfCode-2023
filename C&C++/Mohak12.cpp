//                                                             {Day-12 Programs}
//Q-1 = Write a program that sorts an array of integers in ascending order using the bubble sort algorithm.
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size);
int main() {
    int arr[] = {5, 2, 8, 12, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, size);

    cout << "\nSorted array in ascending order : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
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
//Q-2 = Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.). 
//and also Write a program that asks the user to enter their favorite color and displays a message based on their choice.
#include <iostream>
using namespace std;
enum Colors {
    Red,
    Green,
    Blue,
    Yellow,
    Orange
};
int main() {
    cout << "Enter your favorite color (0 - Red, 1 - Green, 2 - Blue, 3 - Yellow, 4 - Orange) : ";
    int colorChoice;
    cin >> colorChoice;

    switch (static_cast<Colors>(colorChoice)) {
        case Red:
            cout << "Red is a vibrant color!" << endl;
            break;
        case Green:
            cout << "Green represents nature and freshness." << endl;
            break;
        case Blue:
            cout << "Blue is calming and soothing." << endl;
            break;
        case Yellow:
            cout << "Yellow is associated with happiness and energy." << endl;
            break;
        case Orange:
            cout << "Orange is a warm and vibrant color." << endl;
            break;
        default:
            cout << "Invalid color choice." << endl;
            break;
    }
return 0;
}
