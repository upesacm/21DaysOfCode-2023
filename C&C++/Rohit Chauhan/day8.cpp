#include <iostream>
using namespace std;
int main()
{
     int eve=0;
     int i,j,n,m;
     cout<<"Enter the size ";
     cin>>m>>n;
     int A[m][n];
     cout<<"Enter the terms: "<<endl;
     for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
           cin>>A[i][j];
       }
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
          if(A[i][j]%2==0)
           eve++;
      }
    cout<<"The number of even digits are "<<eve<<endl;
    int sumrow,sumcol;
    for(i=0;i<m;i++)
    {
       sumrow=0;
      for(j=0;j<n;j++)
      {
        sumrow+=A[i][j];
      }
      cout<<"Sum of row "<<i+1<<" is "<<sumrow<<endl;
    }
    for(j=0;j<n;j++)
    {
        sumcol=0;
        for(i=0;i<m;i++)
        {
            sumcol+=A[i][j];
        }
        cout<<"Sum of col "<<j+1<<" is"<<sumcol<<endl;
    }
    return 0;
}
