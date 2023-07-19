#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    // Dynamically allocate memory for the 2D array
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    // Populate the array with user-entered values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value for array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
    }

    // Print the sum
    cout << "Sum of all elements: " << sum << endl;

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
