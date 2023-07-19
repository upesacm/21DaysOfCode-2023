#include <iostream>

using namespace std;

void matrixMultiplication(int* matrix1, int rows1, int cols1, int* matrix2, int rows2, int cols2, int* result) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i * cols2 + j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i * cols2 + j] += matrix1[i * cols1 + k] * matrix2[k * cols2 + j];
            }
        }
    }
}

void printMatrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i * cols + j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> cols1;
    cout << "Enter the number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> cols2;

    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Dynamically allocate memory for matrix 1
    int* matrix1 = new int[rows1 * cols1];

    // Get user input to populate matrix 1
    cout << "Enter the elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> matrix1[i * cols1 + j];
        }
    }

    // Dynamically allocate memory for matrix 2
    int* matrix2 = new int[rows2 * cols2];

    // Get user input to populate matrix 2
    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> matrix2[i * cols2 + j];
        }
    }

    // Dynamically allocate memory for the result matrix
    int* result = new int[rows1 * cols2];

    // Perform matrix multiplication
    matrixMultiplication(matrix1, rows1, cols1, matrix2, rows2, cols2, result);

    // Print the result
    cout << "Matrix multiplication result:" << endl;
    printMatrix(result, rows1, cols2);

    // Free the dynamically allocated memory
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
