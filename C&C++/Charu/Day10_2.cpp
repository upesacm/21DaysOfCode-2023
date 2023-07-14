#include <iostream>
using namespace std;

bool sorted( int arr[],int n) {
    if (n <= 1) {
        return true;
    }

    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }
    return sorted(arr, n - 1);
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


      if (sorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}