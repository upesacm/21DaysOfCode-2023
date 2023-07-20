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
    
    // Check if the matrices can be multiplied
    if (columns1 != rows2) {
        cout << "Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 0;
    }

    // Dynamically allocate memory for the first matrix
    int** matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = new int[columns1];
    }

    // Populate the first matrix with user-entered values
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            cout << "Enter value for matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Dynamically allocate memory for the second matrix
    int** matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = new int[columns2];
    }

    // Populate the second matrix with user-entered values
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << "Enter value for matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Dynamically allocate memory for the result matrix
    int** result = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[columns2];
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory for all matrices
    for (int i = 0; i < rows1; i++) {
        delete[] matrix1[i];
    }
    delete[] matrix1;

    for (int i = 0; i < rows2; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    for (int i = 0; i < rows1; i++) {
        delete[] result[i];
    }
    delete[] result;

    return 0;
}
