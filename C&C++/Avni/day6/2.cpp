#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout << "After selection sort: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}