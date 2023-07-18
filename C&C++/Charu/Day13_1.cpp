#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    
    int** array=new int*[rows];
    for(int i = 0; i < rows; i++){
        array[i]=new int [columns];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter the value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
