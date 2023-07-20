#include <iostream>
using namespace std;
int** allocateMatrix(int rows, int columns) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[columns];
    }
    return matrix;
}

void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void readMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter the value for element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

int** multiplyMatrices(int** matrix1, int** matrix2, int rows1, int columns1, int columns2) {
    int** result = allocateMatrix(rows1, columns2);
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

void printMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, columns1, rows2, columns2;
    cout << "Enter the number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> columns1;
    cout << "Enter the number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> columns2;

    if (columns1 != rows2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }
    int** matrix1 = allocateMatrix(rows1, columns1);
    int** matrix2 = allocateMatrix(rows2, columns2);

    cout << "Enter values for matrix 1:" << std::endl;
    readMatrix(matrix1, rows1, columns1);
    cout << "Enter values for matrix 2:" << std::endl;
    readMatrix(matrix2, rows2, columns2);

    int** result = multiplyMatrices(matrix1, matrix2, rows1, columns1, columns2);

    cout << "Matrix multiplication result:" << endl;
    printMatrix(result, rows1, columns2);

    deallocateMatrix(matrix1, rows1);
    deallocateMatrix(matrix2, rows2);
    deallocateMatrix(result, rows1);

    return 0;
}
