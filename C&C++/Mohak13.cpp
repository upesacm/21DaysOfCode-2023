//                                                           {Day - 13 Programs}
//Q-1 = Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. 
//and also Populate the array with values entered by the user and print the sum of all elements.
#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> columns;

    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[columns];
    }

    cout << "Enter the elements of the array :" << endl;
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> array[i][j];
            sum += array[i][j];
        }
    }
cout << "Sum of all elements : " << sum << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
//Q-2 = Create a program that dynamically allocates memory for a matrix of integers. 
//and Allow the user to enter the dimensions of the matrix and populate it with values. Perform matrix multiplication and print the result.
#include <iostream>
using namespace std;
int main() {
    int rows1, columns1, rows2, columns2;

    cout << "Enter the dimensions of the first matrix : " << endl;
    cout << "Number of rows: ";
    cin >> rows1;
    cout << "Number of columns: ";
    cin >> columns1;

    cout << "Enter the dimensions of the second matrix : " << endl;
    cout << "Number of rows : ";
    cin >> rows2;
    cout << "Number of columns : ";
    cin >> columns2;

    int** matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[columns1];
    }

    int** matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[columns2];
    }

    cout << "Enter values for the first matrix : " << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter values for the second matrix : " << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    if (columns1 != rows2) {
        cout << "Invalid matrix dimensions for multiplication!" << endl;
        return 0;
    }

    int** result = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        result[i] = new int[columns2];
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resulting matrix : " << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows1; ++i) {
        delete[] matrix1[i];
    }
    delete[] matrix1;

    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    for (int i = 0; i < rows1; ++i) {
        delete[] result[i];
    }
    delete[] result;

    return 0;
}
