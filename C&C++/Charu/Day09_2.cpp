#include <iostream>
using namespace std;
void rearrange_alternate_positions(int arr[], int n)
{
int i,j;
j = 0;
for(i = 0; i < n; i++)
{
if(arr[i] < 0)
{
if(i != j)
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
j++;
}
}
}
int main()
{
int n,i;
cout << "\nEnter the number of elements : ";
cin >> n;
int arr[n];
cout << "\nInput the array elements : ";
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

rearrange_alternate_positions(arr, n);
cout << "\nRearranged array : ";
for(i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
cout << endl;
return 0;
}