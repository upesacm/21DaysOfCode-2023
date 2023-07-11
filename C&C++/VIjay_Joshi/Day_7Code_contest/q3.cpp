#include<bits/stdc++.h>
using namespace std;


int SumMaxSubarray( vector<int> nums) {
    int temp= 0;
    int maxSum = nums[0];

    for (unsigned int i = 0; i < nums.size(); i++) {
        temp =  temp + nums[i];
        maxSum = max(maxSum, temp);
        if(temp<0)
            temp=0;
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int maxSum = SumMaxSubarray(nums);
   cout << maxSum;

    return 0;
}
