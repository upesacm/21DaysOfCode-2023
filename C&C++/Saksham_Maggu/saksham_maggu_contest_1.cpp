// ques 1: Write a C program that takes an array of integers as input and finds the largest and smallest numbers in the array. The program should return the sum of the indices of the largest and the smallest number.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int get_max_index(vector<int> &v, int size)
{
    int max_val=INT_MIN;
    int index1;
    
    for (int i=0; i<size; i++)
    {
        if (v[i]>max_val)
        {
            max_val=v[i];
            index1=i;
        }
    }
    
    return index1;
}
int get_min_index(vector<int> &v, int size)
{
    int min_val=INT_MAX;
    int index2;
    
    for (int i=0; i<size; i++)
    {
        if (v[i]<min_val)
        {
            min_val=v[i];
            index2=i;
        }
    }
    
    return index2;
}
int sum_of_indices(vector<int> &v, int size)
{
    int max_index=get_max_index(v, size);
    int min_index=get_min_index(v, size);
    
    return (max_index+min_index);
}
int main() 
{
    int n;
    cin>>n;
    
    vector<int> v;
    
    for (int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    
    int sum=sum_of_indices(v, n);
    
    cout<<sum<<endl;
    
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------

// ques 2: Write a program to reverse the words in a given string. The program should reverse the order of the words while keeping the individual words unchanged.
#include <iostream>
#include <sstream>
#include <stack>
#include<string>
using namespace std;
string reverseWords(const std::string& str) {
    stack<string> words;
    string word;
    istringstream iss(str);

    // Split the string into individual words
    while (iss >> word) {
        words.push(word);
    }

    // Reconstruct the reversed string with the words
    ostringstream oss;
    while (!words.empty()) {
        oss << words.top() << " ";
        words.pop();
    }

    string reversedString = oss.str();

    // Remove trailing space if any
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main() {
    string input;
    getline(cin, input);

    string reversed = reverseWords(input);
    cout << reversed << endl;

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------

// ques 3: Write a program to find the maximum sum continuous subarray within a given array of integers. The program should return the maximum sum of the subarray.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <bits/stdc++.h>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main() 
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    int ans=maxSubArraySum(arr, n);
    cout<<ans;
    return 0;
}
