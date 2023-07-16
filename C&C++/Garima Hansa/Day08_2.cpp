//2. Write a program to find the sum of each row and each column in a 2D integer array.

#include <iostream>
using namespace std;

int sumRow(int arr[][4], int m, int n){
    for (int row = 0; row < m ; row++)
    {
        int sum = 0;
        for (int col = 0; col < n ; col++)
        {
            sum += arr[row][col];
        }
         cout << "Sum of Row " << row << " is " << sum << endl;
    }
    
}

int sumCol(int arr[][4], int m, int n){
    for (int col = 0; col < n ; col++)
    {
        int sum = 0;
        for (int row = 0; row < m ; row++)
        {
            sum += arr[row][col];
        }
         cout << "Sum of Column " << col << " is " << sum << endl;
    }
    
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

   cout << "The sum of rows is: "<<endl;
   sumRow(arr, 3, 4);

   cout << "The sum of columns is: "<<endl;
   sumCol(arr, 3, 4);
        
    return 0;
}