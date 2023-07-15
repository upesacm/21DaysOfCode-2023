#include <iostream>
using namespace std;

void fibonacci(int n, int arr[]) {
    if (n == 0) {
        arr[0] = 0;
    } else if (n == 1) {
        arr[1] = 1;
    }
    else
    {
        fibonacci(n - 1, arr);
        arr[n] =arr[n - 1] + arr[n - 2];
    }
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    int arr[n];

    fibonacci(n, arr);

    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
