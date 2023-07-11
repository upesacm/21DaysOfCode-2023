//                                                                    {Day-8 Programs}
//Q-1 =  Write a program to count the number of even elements in a 2D integer array.
#include <iostream>
using namespace std;
int main() {
    int arr[][3] = {{1 , 2 , 3} , {4 , 5 , 6} , {7 , 8 , 9}};
    int evenCount = 0;

    for (const auto& row : arr) {
        for (int num : row) {
            if (num % 2 == 0) {
                evenCount++;
            }
        }
    }
cout << "Number of even elements : " << evenCount << endl;

  return 0;
}
//Q-2 = Write a program to find the sum of each row and each column in a 2D integer array.
#include <iostream>
using namespace std;
int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int rowSum[rows] = {0};
    int colSum[cols] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    } 
    cout << "Row sums : ";
    for (int sum : rowSum) {
        cout << sum << " ";
    }
    cout << endl;

    cout << "Column sums : ";
    for (int sum : colSum) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}

