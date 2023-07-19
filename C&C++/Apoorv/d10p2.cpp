#include <iostream>
#include <vector>

using namespace std;

bool isSorted(const vector<int>& arr, int size) {
    if (size <= 1) {
        return true;
    } else {
        if (arr[size - 1] < arr[size - 2]) {
            return false;
        } else {
            return isSorted(arr, size - 1);
        }
    }
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
