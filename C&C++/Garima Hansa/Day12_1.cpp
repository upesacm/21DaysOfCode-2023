// Write a program that sorts an array of integers in ascending order using the bubble sort algorithm.

#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[100], j, temp;
    cout << "Enter the Size (max. 100): ";
    cin >> n;
    cout << "Enter " << n << " Numbers: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Sorting the Array using Bubble Sort..." << endl;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The New Array is: " << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}