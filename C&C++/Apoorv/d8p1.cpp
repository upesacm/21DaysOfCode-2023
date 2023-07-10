#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers you would like to enter: ";
    cin>>n;

    vector<int> array;

    int worker=0 , flag=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>worker;
        array.push_back(worker);

        if (array[i]%2==0 && array[i]>0)
        {
            flag++;
        }
    }

    cout<<"\nThere are "<<flag<<" even numbers in an array.";

    return 0;
}
