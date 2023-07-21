// ques 1: Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.
#include <iostream>
#include <vector>
using namespace std;
vector<int> fibonacci(int n) 
{
    vector<int> sequence;
    
    if (n <= 0) 
    {
        return sequence;
    }
    
    if (n == 1) 
    {
        sequence.push_back(0);
        return sequence;
    }
    
    if (n == 2) 
    {
        sequence.push_back(0);
        sequence.push_back(1);
        return sequence;
    }
    
    sequence = fibonacci(n - 1);
    int nextNum = sequence[n - 2] + sequence[n - 3];
    sequence.push_back(nextNum);
    
    return sequence;
}

int main() 
{
    int number;
    cout << "Enter the number of Fibonacci sequence elements to generate: ";
    cin >> number;
    
    vector<int> fibSequence = fibonacci(number);
    
    cout << "Fibonacci sequence:";
    for (int num : fibSequence) 
    {
        cout << " " << num;
    }
    cout << endl;
    
    return 0;
}

//-----------------------------------------------------------------------------------------------------

// ques 2: Implement a recursive function to check if a given array is sorted in ascending order. 
#include<iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& arr, int index = 0) 
{
    if (index <= 1) 
    {
        return true;
    }
    
    if (arr[index] < arr[index - 1]) 
    {
        return false;
    }
    
    return isSorted(arr, index - 1);
}

int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5};
    bool sorted = isSorted(arr);
    
    if (sorted) 
    {
        cout << "The array is sorted in ascending order." << endl;
    } 
    else 
    {
        cout << "The array is not sorted in ascending order." << endl;
    }
    
    return 0;
}
