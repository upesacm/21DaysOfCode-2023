//2. Implement a recursive function to check if a given array is sorted in ascending order. 
#include<iostream>
using namespace std;


bool checkAscendingOrder (int arr[], int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        if(arr[n] >= arr[n-1]){
            checkAscendingOrder(arr, n-1);
        }else{
            return 0;
        }
    }
}

int main(){
    //int arr[9] = {1,2,3,4,5,4,3,2,1};

    int arr[100];
    cout << "Enter the size of Array..." <<endl;
    int n;
    cin >> n;
    cout << "Enter the elements of the Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    if (checkAscendingOrder(arr, n))
    {
        cout << "Array is sorted ascending order" << endl;
    }
    else{
        cout << "Array is not sorted in ascending order. " <<endl;
    }
    
}