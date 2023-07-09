#include <iostream>
#include <climits>
using namespace std;
int maxSubarraySum(int arr[], int size) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int maxSum = maxSubarraySum(arr, size);
    cout << maxSum << endl;

    return 0;
}