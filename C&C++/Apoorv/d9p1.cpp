#include <iostream>

using namespace std;

int average(int* list , int size);

int average(int* list , int size)
{
    int count;
    for(int i=0 ; i<size ; i++)
    {
        count+=list[i];
    }
    return count/size;
}

int main()
{
    int n;
    cout<<"How many numbers you would like to enter: ";
    cin>>n;
    int array[n];

    for(int i=0 ; i<n ; i++)
    {
        cin>>array[i];
    }

    int size=sizeof(array)/sizeof(1);

    cout<<average(array , size);
}
