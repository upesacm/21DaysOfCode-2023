//Write a program to find the sum of each row and each column in a 2D integer array

#include <iostream>
using namespace std;

int main() {

    int row, col;
    int arr[10][10];
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    cout << endl;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    int rowSum = 0;
    cout << endl;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            rowSum += arr[i][j];
        }
        cout << "The sum of " << i+1 << " row is: " << rowSum << endl;
        rowSum = 0;
    } cout << endl;

    int colSum = 0;
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            colSum += arr[j][i];
        }
        cout << "The sum of " << i+1 << " column is: " << colSum << endl;
        colSum = 0;
    } cout << endl;

    return 0;
}
