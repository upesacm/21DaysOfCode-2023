//1. Write a program to count the number of even elements in a 2D integer array.
#include<iostream>
using namespace std;

int evenElements(int arr[][4], int m, int n){
    int count = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] % 2 == 0)
            {
                count++;
            }  
        }
        
    }
    return count;
}

int main()
{
    
    int arr[3][4];

    // take input row wise
    cout << "Enter the elements: "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }
    

    // printing the array 
    cout << "Printing row wise..." << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int ans = evenElements(arr, 3, 4);
    cout << "The number of even elements in the array is " << ans << endl;        
    return 0;
}