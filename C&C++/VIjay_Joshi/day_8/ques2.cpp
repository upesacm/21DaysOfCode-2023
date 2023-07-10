//2. Write a program to find the sum of each row and each column in a 2D integer array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    cout << "Enter the number of columns: ";
    cin >> cols;
    
  
    int arr[rows][cols];
    
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at index (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
    

    cout << "Sum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }
    
    cout << "Sum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }
    
    return 0;
}
