//Create a program that dynamically allocates memory for a matrix of integers. Allow the user to enter the dimensions of the matrix and populate it with values. Perform matrix multiplication and print the result.

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

    // If column of first matrix in not equal to row of second matrix, matrix multiplication isn't possible
    if (col != row) {
        cout << "Error! Number of columns of the matrix is not equal to number of rows of the matrix, therefore, matrix multiplication isn't possible" << endl;
    }

    else {
        //Initializing elements of matrix mult to 0.
        int mul[10][10];
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                mul[i][j] = 0;
            }
        }

        //Multiplying matrix and storing in array mul.
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                for (int k = 0; k<col; k++) {
                    mul[i][j] += arr[i][k] * arr[k][j];
                }
            }
        }

        //Printing the mul matrix
        cout << "The resultant Matrix is: " << endl;
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
