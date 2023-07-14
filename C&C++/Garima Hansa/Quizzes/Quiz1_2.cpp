//2. Write a program to find the maximum sum continuous subarray within a given array of integers. The program should return the maximum sum of the subarray.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maximumSubarraySum(vector < int > arr) {
  int n = arr.size();
  int maxSum = INT_MIN;

  for (int i = 0; i <= n - 1; i++) {
    int sum = 0;
    for (int j = i; j <= n - 1; j++) {
    sum += arr[j];
      if (sum > maxSum) {
        maxSum = sum;
      }
    }
  }

  return maxSum;
}
int main() {
    
    int n;
    cin >> n;
    vector<int> a;
    int e ;
    for(int i=0; i<n; i++){
        cin >> e;
        a.push_back(e);
    }
    cout << maximumSubarraySum(a) << endl;
    return 0;
}