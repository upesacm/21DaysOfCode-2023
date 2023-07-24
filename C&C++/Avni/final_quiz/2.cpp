#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> merged;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;
}
