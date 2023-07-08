#include<iostream>

using namespace std;

int main()
{
    // fIBONACCI SERIES
    // 0 1 1 2 3 5 8 13 21 34 . . . . . . 
   // Made w.r.t Integers

    int f=0 , s=1 ; 
    int ask_input;
    cout<<"How many fibonacci numbers you would like to print: ";
    cin>>ask_input;
    if(ask_input<0)
    {
        cout<<"Invalid input.";
    }
    else if (ask_input==0)
    {
        cout<<"Thank you.";
    }
    else if (ask_input==1)
    {
        cout<<"0";
    }
    else if (ask_input==2)
    {
        cout<<"0 "<<s<<" ";
    }
    else
    {
        int mid;
        cout<<"0 "<<s<<" ";
        for(int i =1 ; i <ask_input-1 ; i ++)
        {
            cout<<f+s<<" ";
            mid=f;
            f=s;
            s=mid+s;    
        }
    }

    return 0 ; 
    
}
