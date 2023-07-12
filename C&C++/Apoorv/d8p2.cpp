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

    int worker=0 , rowSUM=0 , colSUM=0;
    for(int i=0 ; i<row ; i++)
    {
        cout<<"\nPlease enter row "<<(i+1)<<": ";
        for(int j=0 ; j<col ; j++)
        {
            cin>>worker;
            array[i][j]=worker;

        }
        
    }

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {            
            rowSUM+=array[i][j];
        }
        cout<<"\nSum of row"<<(i+1)<<" is: "<<rowSUM;
        rowSUM=0;

    }

    cout<<"\n";

    for(int i=0 ; i<col ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            colSUM+=array[j][i];
        }

        cout<<"\nSum of col"<<(i+1)<<" is: "<<colSUM;
        colSUM=0;
    }


    // We could have merged our 2nd and 3rd for loop if the 2d array was always a square matrix
    // but it can not always be true.

    
    
}
