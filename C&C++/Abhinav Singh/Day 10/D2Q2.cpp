//Implement a recursive function to check if a given array is sorted in ascending order. 
#include <iostream>
#include <vector>

using namespace std;

bool isSorted(const vector<int>& arr, int n) {
    if (n <= 1) {
        return true;
    }
    
    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }
    
    return isSorted(arr, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    bool sorted = isSorted(arr, arr.size());
    if (sorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}
