#include<iostream>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

void compare_dates(struct date first , struct date second)
{
    if(second.year<first.year)
    {
        cout<<"The second date is earlier.";
    }
    else if(second.year>first.year)
    {
        cout<<"The first date is earlier.";
    }
    else
    {
        if(second.month<first.month)
        {
            cout<<"The second date is earlier.";
        }
        else if(second.month>first.month)
        {
            cout<<"The first date is earlier.";
        }
        else
        {
            if(second.day<first.day)
            {
                cout<<"The second date is earlier.";
            }
            else if(second.day>first.day)
            {
                cout<<"The first date is earlier.";
            }
            else
            {
                cout<<"The both date are same.";
            }
        }
    }
}

int main()
{
    date first ;
    date second ; 

    cout<<"Lets enter first date details: ";
    cout<<"\nEnter the date: ";
    cin>>first.day;
    cout<<"\nEnter first date month: ";
    cin>>first.month;
    cout<<"\nEnter the year: ";
    cin>>first.year;

    
    cout<<"\n\nLets enter Second date details: ";
    cout<<"\nEnter the date: ";
    cin>>second.day;
    cout<<"\nEnter first date month: ";
    cin>>second.month;
    cout<<"\nEnter the year: ";
    cin>>second.year;

    compare_dates(first , second);

    return 0;

}









