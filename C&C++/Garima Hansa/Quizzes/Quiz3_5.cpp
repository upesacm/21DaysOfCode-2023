/*
In the realm of quantum computing, envision a quantum circuit constructed using quantum gates to execute a binary search algorithm on a quantum register that symbolizes a sorted array of integers. The quantum binary search algorithm efficiently and swiftly locates the desired integer in the quantum register, surpassing the performance of traditional classical binary search algorithms.

Input Format

The first line contains an integer 'n', which represents the size of the sorted array.
The second line contains 'n' space-separated integers, representing the elements of the sorted array.
The third line contains a single integer 'target', which represents the element to be searched in the array.
Constraints

1 <= n <= 10^6 (size of the sorted array)
The elements in the sorted array will be integers within the range of a 32-bit signed integer.
The input array will be sorted in ascending order.
Output Format

If the target element is found, the function returns its index in the array.
If the target element is not found, the function returns -1.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    int nf = -1;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout  << result << endl;
    } else {
        cout << nf << endl;
    }

    return 0;
}