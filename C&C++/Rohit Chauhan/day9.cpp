#include <iostream>
using namespace std;
void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
void rotate(int arr[], int l, int r)
{
int temp = arr[r];
for (int j = r; j > l - 1; j--) 
  arr[j] = arr[j - 1];
arr[l] = temp;
}
  
void shiftnegative(int arr[], int n)
{
 
    int last_neg = -1;
     
    for (int i = 0; i < n; i++) {
      if (arr[i] < 0) 
      {
        last_neg += 1;
        int temp = arr[i];
        arr[i] = arr[last_neg];
        arr[last_neg] = temp;
     
        
        if (i - last_neg >= 2)
          rotate(arr, last_neg + 1, i);
      }
}
}
int main()
{
    /*int n,i,total=0;
    float avg;
    cout<<"Enter the size: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements";      //ques 1 
    for(i=0;i<n;i++)
       cin>>A[i];
    for(i=0;i<n;i++)
    {
        total+=A[i];
    }   
    avg=total/n;
    cout<<avg;*/
    int A[10]={1,-2,3,-3,4,-5,6,-7,8,-9};
    int n=10;
    shiftnegative(A,n);
    Display(A,n);
    return 0;
}
