#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row , col;
    cout<<"\nEnter numebr of row: ";
    cin>>row;
    cout<<"\nEnter number of columns: ";
    cin>>col;

    vector<vector<int>> array;

    array.resize(row, vector<int>(col));

    int worker=0 , flag=0;
    for(int i=0 ; i<row ; i++)
    {
        cout<<"\nPlease enter row "<<(i+1)<<": ";
        for(int j=0 ; j<col ; j++)
        {
            cin>>worker;
            array[i][j]=worker;

            if (array[i][j]%2==0 && array[i][j]>0)
            {
                flag++;
            }
        }
    }

    cout<<"\nThere are "<<flag<<" even numbers in an array.";

    return 0;
}
