#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter rows for matrix A: ";
    cin >> rowsA;

    cout << "Enter  columns for matrix A: ";
    cin >> colsA;

    cout << "Enter rows for matrix B: ";
    cin >> rowsB;

    cout << "Enter columns for matrix B: ";
    cin >> colsB;

    if (colsA != rowsB) {
        cout << "Invalid matrix multiplication!" << endl;
        return 0;
    }

    int** matrixA = new int*[rowsA];
    for (int i = 0; i < rowsA; i++) {
        matrixA[i] = new int[colsA];
    }

    int** matrixB = new int*[rowsB];
    for (int i = 0; i < rowsB; i++) {
        matrixB[i] = new int[colsB];
    }


    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    int** resultMatrix = new int*[rowsA];
    for (int i = 0; i < rowsA; i++) {
      
      resultMatrix[i] = new int[colsB];
      for (int j = 0; j < colsB; j++) {
    
        resultMatrix[i][j] = 0;
        
        for (int k = 0; k < colsA; k++) {
        
          resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "Result of matrix multiplication:" << endl;
  
    for (int i = 0; i < rowsA; i++) {
  
      for (int j = 0; j < colsB; j++) {
      
        cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    free(matrixA);

  free(matrixB);
  free(resultMatrix);
  

    return 0;
}
