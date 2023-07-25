#include <iostream>
#include <unordered_map>

using namespace std;

int countPairsWithTargetSum(int arr[], int n, int target) {
    unordered_map<int, int> frequency;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int complement = target - arr[i];

        if (frequency.find(complement) != frequency.end()) {
            count += frequency[complement];
        }

        frequency[arr[i]]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
     for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = countPairsWithTargetSum(arr, n, target);
    cout <<  result << endl;

    return 0;
}
