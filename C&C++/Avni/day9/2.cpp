#include<iostream>
using namespace std;

void rearrange(int arr[],int n)
{
    int i = 0, j = 0;
   while (j < n) {
       if (arr[j] >= 0) {
           j++;
       }
       else {
           for (int k = j; k > i; k--) {
               int temp = arr[k];
               arr[k] = arr[k - 1];
               arr[k - 1] = temp;
           }
           i++;
           j++;
       }
   }
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
    rearrange(arr,n);
    cout<<"result is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}