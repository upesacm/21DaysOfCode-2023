#include <iostream>

using namespace std;

int main() {
    int rows1, columns1, rows2, columns2;

    cout << "Enter the dimensions of the first matrix:" << endl;
    cout << "Number of rows: ";
    cin >> rows1;
    cout << "Number of columns: ";
    cin >> columns1;

    cout << "Enter the dimensions of the second matrix:" << endl;
    cout << "Number of rows: ";
    cin >> rows2;
    cout << "Number of columns: ";
    cin >> columns2;

    if (columns1 != rows2) {
        cout << "Error: Matrix dimensions are not compatible for multiplication." << endl;
        return 0;
    }

    int** matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[columns1];
    }

    int** matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[columns2];
    }

    cout << "Enter the values for the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cout << "Enter the value at position (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the values for the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << "Enter the value at position (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }

    int** resultMatrix = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        resultMatrix[i] = new int[columns2];
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < columns1; ++k) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
