#include <iostream>
#include <vector>
using namespace std;


int getMax(const vector<int>& arr) {
    int max = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(vector<int>& arr, int exp) {
    const int radix = 10;
    vector<int> output(arr.size());
    vector<int> count(radix, 0);


    for (size_t i = 0; i < arr.size(); ++i) {
        count[(arr[i] / exp) % radix]++;
    }



    for (size_t i = 1; i < radix; ++i) {
        count[i] += count[i - 1];
    }


    for (int i = arr.size() - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % radix] - 1] = arr[i];
        count[(arr[i] / exp) % radix]--;
    }

    
    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = output[i];
    }
}


void radixSort(vector<int>& arr) {
    int max = getMax(arr);

    
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    radixSort(arr);

    cout << "Sorted array in ascending order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
