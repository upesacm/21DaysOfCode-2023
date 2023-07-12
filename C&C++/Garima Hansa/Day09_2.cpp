// 2. Implement a function that takes an array of integers and its size as parameters. The function should rearrange the array in such a way that all the negative numbers appear before the positive numbers while preserving the relative order of the negative and positive numbers.

#include <iostream>
using namespace std;

int print(int arr[], int size)
{
    cout << "The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int negBeforePos(int arr[], int size)
{
    cout << endl <<endl << "After the change,";
    int temp, i;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > 0)
        {
            continue;
        }
        else
        {
            temp = arr[j];
            i = j - 1;
            while (arr[i]>0 && i >=0)
            {
                arr[i+1]=arr[i];
                i--;
            }
            arr[i+1]=temp;
        }
    }
    cout << print(arr,size)<<endl;
}

int main()
{

    int arr[6] = {1, -2, -3, 4, 5, 6};
    print(arr, 6);
    negBeforePos(arr,6);
    
}