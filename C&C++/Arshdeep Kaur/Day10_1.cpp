//Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.

#include <iostream>
using namespace std;

int * printFibonacci(int arr[], int n, int i, int n1, int n2) {

    int n3 = 0;

    if (n > 2) {    
        n3 = n1 + n2;
        arr[i] = n3;
        printFibonacci(arr, n-1, i+1, n2, n3);
    }

    return arr;
}

int main() {

    int n, arr[100];

    cout << "Enter the number of terms: ";
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;

    int* ans = printFibonacci(arr, n, 2, 0, 1);

    cout << "The fibonacci series till " << n << " terms is: " << endl;
    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    } cout << endl;

    delete []ans;
    return 0;
}
