//Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. Populate the array with values entered by the user and print the sum of all elements.

#include <iostream>
using namespace std;

int main() {

    int ** arr;
    int row, col;
    cout << "Enter the number of rows & columns: ";
    cin >> row >> col;
    arr = new int * [row];

    for (int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    cout << "Enter " << (row * col) << " numbers to the array: ";
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of the elements of the array is: " << sum << endl;

    delete[] arr;

    return 0;
}
