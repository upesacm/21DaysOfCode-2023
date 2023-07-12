// ques 1: Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array
#include <iostream>
using namespace std;

// Function that return average of an array.
double average(int a[], int n)
{
	// Find sum of array element
	int sum = 0;
	for (int i=0; i<n; i++)
	sum += a[i];

	return (double)sum/n;
}

// Driver code
int main()
{
	int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << average(arr, n) << endl;
	return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------

// ques 2: Implement a function that takes an array of integers and its size as parameters. The function should rearrange the array in such a way that all the negative numbers appear before the positive numbers while preserving the relative order of the negative and positive numbers.
#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(vector<int> &arr, int n)
{
    vector<int> v;
    for (int i=0; i<n; i++)
    {
        if (arr[i]<0)
        {
            v.push_back(arr[i]);
        }
    }
    
    for (int i=0; i<arr.size(); i++)
    {
        if (arr[i]>=0)
        {
            v.push_back(arr[i]);
        }
    }
    
    return v;
}
int main()
{
    vector<int> v1={-1, 2, 0, -9, -5, 8, 7};
    vector<int> ans=solve(v1, v1.size());
    for (int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
