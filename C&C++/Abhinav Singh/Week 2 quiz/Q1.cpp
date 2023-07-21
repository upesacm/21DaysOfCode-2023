#include <iostream>
#include <limits.h>

using namespace std;

void max_A_div(int** arr, int row, int column) {
    int maxE = INT_MIN;
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (maxE < arr[i][j]) {
                maxE = arr[i][j];
            }
        }
    }
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j]%maxE == 0) {
                sum += arr[i][j];
                // maxE = arr[i][j];
            }
        }
    }
    
    cout << "Maximum Element: " << maxE<<endl;
    cout << "Sum of Divisible Elements: "<<sum;
}

int main() {
    int row, column;
    cin >> row >> column;

    int** a = new int*[row];
    for (int i = 0; i < row; i++) {
        a[i] = new int[column];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> a[i][j];
        }
    }

    max_A_div(a, row, column);


    return 0;
}
