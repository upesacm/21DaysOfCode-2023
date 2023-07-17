#include <iostream>
using namespace std;
int main()
{
    int n,arr[100],i,j,p,r;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array is: "<<endl;
    for(j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl<<"The sorted array is: "<<endl;
    //sorting
   for(p=0;p<n;p++)
     for(r=p+1;r<n;r++)
   {
    if (arr[p]>arr[r])
    {
        int temp=arr[p];
        arr[p]=arr[r];
        arr[r]=temp;
    }
   }
   for(int q=0;q<n;q++)
    {
        cout<<arr[q]<<" ";
    }
   return 0;
}
