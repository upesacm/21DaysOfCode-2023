#include<iostream>
using namespace std;

// Function to find the maximum element in the array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Counting Sort for a specific digit (exp)
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};
    for (int i = 0; i < n; ++i)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < 10; ++i)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; ++i)
        arr[i] = output[i];
}

// Radix Sort
void radixSort(int arr[], int n) {
    int max = findMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() 
{
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    radixSort(arr, n);

    std::cout << "Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
