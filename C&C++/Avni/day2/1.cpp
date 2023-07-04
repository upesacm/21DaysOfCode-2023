#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout<<"leap year"<<endl;;
    }
    else{
        cout<<"non leap year"<<endl;
    }
}