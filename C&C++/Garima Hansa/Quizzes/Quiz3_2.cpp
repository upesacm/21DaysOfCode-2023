/*
In quantum computing, a specialized algorithm could merge two sorted quantum states, representing equal-sized arrays, into a new sorted quantum state with double the elements. Utilizing quantum properties like superposition and entanglement, the algorithm might offer advantages over classical approaches. However, practical implementation on large-scale quantum computers is still a developing area of research.

Input Format

The input consists of three lines:

The first line contains an integer 'n', which represents the size of each input array.
The second line contains 'n' space-separated integers, representing the elements of the first sorted array.
The third line contains 'n' space-separated integers, representing the elements of the second sorted array.
Constraints

2 <= n <= 10^5 (size of each input array)
-10^9 <= Array elements <= 10^9
Both input arrays will be sorted in ascending order.
Output Format

The function should return a new sorted array that is twice the size of the input arrays, containing all elements from both input arrays merged in ascending order.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> mergedArr;
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr.push_back(arr1[i]);
            i++;
        } else {
            mergedArr.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n1) {
        mergedArr.push_back(arr1[i]);
        i++;
    }

    while (j < n2) {
        mergedArr.push_back(arr2[j]);
        j++;
    }

    return mergedArr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    vector<int> mergedArray = mergeArrays(arr1, arr2);

    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
