#include<iostream>

using namespace std;

void bubble_sort(int * list,int n)    // this int * list points to first number of the array
{
    int worker;
    for(int i=0 ; i<n ; i++ )
    {
        for(int j=0 ; j<n-1 ; j++)
        {
            if(list[j]>list[j+1])
            {
                // swap
                worker=list[j+1];
                list[j+1]=list[j];
                list[j]=worker;
            }
        }
    }
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

    cout<<"\nThis is the array before.\n";
    for(int i=0 ; i<n ; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"\nThis is the array after sorting.\n";

    bubble_sort(array,n);

    for(int i=0 ; i<n ; i++)
    {
        cout<<array[i]<<" ";
    }
}
