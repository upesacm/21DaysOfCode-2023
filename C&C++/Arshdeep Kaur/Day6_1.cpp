//Write a C++ program to find the second smallest element in an integer array

#include <iostream>
using namespace std;

int main() {
    int arr[10], n;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int smallest = arr[0];
   for (int i=0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
   }

   int sec_smallest = arr[0];
   for (int i=0; i < n; i++) {
        if(arr[i] != smallest && arr[i] < sec_smallest) {
            sec_smallest = arr[i];
        }
   }

   cout << "The second smallest element of the array is: " << sec_smallest << endl;

}
