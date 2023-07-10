//1. Write a program to count the number of even elements in a 2D integer array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter  number of rows: ";
    cin >> rows;
    
    cout << "Enter  number of columns: ";
    cin >> cols;
    
    int arr[rows][cols];

    cout << "Enter  elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at index (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
    

    int evenCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        }
    }
    
    cout << "Number of even elements: " << evenCount << endl;
    
    return 0;
}
