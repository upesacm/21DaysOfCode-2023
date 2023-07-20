// 1. Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. Populate the array with values entered by the user and print the sum of all elements.

#include<iostream>
using namespace std;

#include <iostream>

int main() {
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    // Dynamically allocate memory for the 2D array
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

    // Populate the array with user-entered values
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
    }

    // Print the sum
    cout << "The sum of all elements: " << sum << endl;

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
