#include<iostream>

using namespace std;


int main()
{
    int length;
    cout<<"How many numbers you would like to enter: ";
    cin>>length;
    int array[length];

    
    for(int i =0 ; i<length ; i++)
    {
        cin>>array[i];
    }

    int highest=0 , second_highest=array[0] ; 

    for(int i =0 ; i<length ; i++)
    {
        if(array[i]>=highest)
        {
            second_highest=highest;
            highest=array[i];
            
        }
        
        else if (array[i]>=second_highest)
        {
            second_highest=array[i];
        }
    }

    cout<<"Highest: "<<highest;
    cout<<"\nSecond Highest: "<<second_highest;

    return 0;
    
}
