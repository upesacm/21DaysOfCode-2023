#include <iostream>
#include <climits>
using namespace std;
const int MAX_SIZE = 1000;

int main() {
    int data[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cin >> rows >> cols;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> data[i][j];
        }
    }

    int highestValue = INT_MIN;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] > highestValue) {
                highestValue = data[i][j];
            }
        }
    }
    long long sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] != 0 && data[i][j] % highestValue == 0) {
                sum += data[i][j];
            }
        }
    }

    cout << "Maximum Element: " << highestValue << endl;
    cout << "Sum of Divisible Elements: " << sum << endl;

    return 0;
}

