// ques 1:Write a C/C++ program to find the second smallest element in an integer array.
#include <iostream>
#include <climits>

using namespace std;

int findSecondSmallest(int arr[], int size) 
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) 
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() 
{
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = findSecondSmallest(arr, size);

    if (secondSmallest == INT_MAX) 
    {
        cout << "There is no second smallest element." << endl;
    } 
    else 
    {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}

//---------------------------------------------------------------------------------------------------------

// ques 2: Write a C/C++ program to sort an integer array in ascending order using a sorting algorithm (e.g., bubble sort)
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    bubbleSort(arr, size);

    cout << "Sorted array (ascending order): ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
