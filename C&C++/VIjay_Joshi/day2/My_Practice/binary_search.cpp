#include <bits/stdc++.h>
using namespace std;

int main()
{
  int c, first, last, middle, n, search, arr[100];

  cout<<"Enter number of elements"<<endl;
  cin>>n;

  cout << "Enter " << n << " sort integers: (Ascending) "<<endl;

  for (c = 0; c < n; c++)
    cin>>arr[c];

  cout<<"Enter value to find"<<endl;
  cin>>search;

sort(arr,arr+n-1);


  first = 0;
  last = n - 1;
  
  while (first <= last) {
  middle = (first+last)/2;
    if (arr[middle] == search) {
      cout<<search<<" found at location "<< middle+1;
      return 0;
    }
   else if (arr[middle] < search)
      first = middle+1;
    else
      last = middle-1;
    middle = (first+last)/2;
  }
  
 
    cout<<"Not found!"<<search<<" isn't present in the list.";

  return 0;
}
