#include <iostream>
using namespace std;

void fibonacci(int num, int arr[], int i) {
    if (i == 0) {
        arr[i] = 0;
    } else if (i == 1) {
        arr[i] = 1;
    } else {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    if (i < num - 1) {
        fibonacci(num, arr, i + 1);
    }
}

int main() {
    int num;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> num;

    int fibArr[num];
    fibonacci(num, fibArr, 0);

    cout << "Fibonacci up " << num << ": ";
    for (int i = 0; i < num; i++) {
        cout << fibArr[i] << " ";
    }
    cout << endl;

    return 0;
}
