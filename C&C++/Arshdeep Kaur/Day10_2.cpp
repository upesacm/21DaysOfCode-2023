//Implement a recursive function to check if a given array is sorted in ascending order. 

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i) {

    //base case
    if (i == n-1) {
        return true;
    }
    
    if (n == 0 || n == 1) {
        return true;
    }

    if (arr[i] < arr[i+1]) {
        isSorted(arr, n, i+1);
    }

    else {
        return false;
    }

}

int main() {

    int n, arr[10];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    if(isSorted(arr, n, i)) {
        cout << "The array is sorted" << endl;
    }
    else {
        cout << "The array is not sorted" << endl;
    }

    return 0;
}
