#include<iostream>
using namespace std;

int main()
{
    int a, b ;
    cin>>a;
    cin>>b;

    cout<<"First number = "<<a<<"\nSecond number = "<<b;
    cout<<"\n\nAFTER SWAPPING\n\n";

    a = a^b;
    b = b^a;
    a = a^b;

    cout<<"First number = "<<a<<"\nSecond number = "<<b;
    
}
