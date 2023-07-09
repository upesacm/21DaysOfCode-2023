//1.  Write a C/C++ program to find the second smallest element in an integer array.

#include<iostream>
using namespace std;

int main()
{
    int smallest, secondSmallest, arr[100], size, i;
    
    cout << "\n Enter Array Size (Max 100) : ";
    cin >> size;
    
    cout << "\n Enter Array Elements : \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    smallest = arr[0];
    secondSmallest = arr[0]; 
    
    for (i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    
    cout << "Second Smallest Element is : " << secondSmallest << endl;

    return 0;
}
