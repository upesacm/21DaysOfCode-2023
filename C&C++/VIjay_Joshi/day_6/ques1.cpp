
//1. Write a C/C++ program to find the second smallest element in an integer array.

#include <iostream>
#include <climits>
using namespace std;



int main() {
   int size ;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the elements in array ";
    int arr[size];
      for (int i = 0; i < size; i++) {
       cin>> arr[i];
    }
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secSmallest && arr[i] != smallest) {
            secSmallest = arr[i];
        }
    }

   
    if (secSmallest == INT_MAX) {
        cout << "There is no second smallest element." << endl;
    } else {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}
