#include <iostream>
#include <unordered_map>
using namespace std;
int countPairsWithSum(int arr[], int size, int target) {
    unordered_map<int, int> freqMap;
    int count = 0;

    for (int i = 0; i < size; i++) {
        int complement = target - arr[i];
        count += freqMap[complement];
        freqMap[arr[i]]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = countPairsWithSum(arr, n, target);
    cout<< result << endl;

    return 0;
}
