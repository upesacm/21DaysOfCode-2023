#include <iostream>
using namespace std;

int main()
{
    int n ; 
    cin>>n;

    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>array[i];
    }

    int lnum=0 , snum=array[0] , lind=0 , sind=0 ;

    for (int i=0 ; i<n ; i++)
    {
        if (array[i]>lnum)
        {
            lnum=array[i];
            lind=i;
        }
        else if(array[i]<snum)
        {
            snum=array[i];
            sind=i;
        }
    }

    cout<<(sind+lind);

    return 0;
}
