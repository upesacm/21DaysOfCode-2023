//Write a program to count the number of even elements in a 2D integer array

#include <iostream>
using namespace std;

int main() {

    int row, col;
    int arr[10][10];
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    cout << "The number of even elements in the 2-D Array is: " << count << endl;
    return 0;
}
