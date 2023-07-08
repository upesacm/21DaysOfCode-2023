#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter elements in the array: "<<endl;
    //taking input for array elements
    for(int i=0;i<size;i++)
    {
         cin>>arr[i];
    }
    cout<<"The array is: "<<endl;
    //printing the final array
    for(int j=0;j<size;j++)
    {
    cout<<" "<<arr[j];
    }
    //sorting array element
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++) 
        { 
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"\nArray after sorting: ";
   
    for(int i=0; i<size; i++)
      cout<<arr[i]<<" ";
      return 0;
}
