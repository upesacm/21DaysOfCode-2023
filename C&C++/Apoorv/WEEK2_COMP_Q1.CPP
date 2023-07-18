#include<iostream>

using namespace std;

int main()
{
    int row, col;
    cin>>row;
    cin>>col;

    int array[row][col];
    int higgest=0;
    int ans_sum=0;

    for(int i=0 ; i<col ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            cin>>array[i][j];
            if (array[i][j]>higgest)
            {
                higgest=array[i][j];
            }
        }
    }

    for(int i=0 ; i<col ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            if (array[i][j]%higgest==0)
            {
                ans_sum+=array[i][j];
            }
        }
    }

    cout<<"Maximum Element: "<<higgest;
    cout<<"\nSum of Divisible Elements: "<<ans_sum;

    


}
