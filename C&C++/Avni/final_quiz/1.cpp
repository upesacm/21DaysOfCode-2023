#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<unordered_map>
using namespace std;

int countPairsWithTargetSum(vector<int>& nums, int target) {
    int count = 0;
    unordered_map<int, int> numFrequency;

    for (int num : nums) {
        int complement = target - num;
        count += numFrequency[complement];
        numFrequency[num]++;
    }

    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int result = countPairsWithTargetSum(nums, target);
    cout << result << endl;

    return 0;
}
