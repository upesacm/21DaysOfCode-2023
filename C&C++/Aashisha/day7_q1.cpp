#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    // takes array element input
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // prints the array elements
    cout<<"The array is: "<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    int small=arr[0];
    int large=arr[0];
    int s_index=0;
    int l_index=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            s_index=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            l_index=i;
        }
    }
    int sum= s_index+l_index;
    cout<<"The sum is: "<<sum;
    return 0;
}
