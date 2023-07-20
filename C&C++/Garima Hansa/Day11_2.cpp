// 2. Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine which one is earlier.

#include <iostream>
using namespace std;

struct Date
{
    int dd, mm, yyyy;
};

int compare_date(struct Date d1, struct Date d2)
{
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
        return 0;
    else if (d1.yyyy > d2.yyyy || d1.yyyy == d2.yyyy && d1.mm > d2.mm ||
             d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd > d2.dd)
        return 1;
    else
        return -1;
}
void print_Date(struct Date d)
{
    cout << d.dd << "." << d.mm << "." << d.yyyy << endl;
}

int main()
{
    Date d1 = {14, 06, 2005};
    Date d2 = {13, 06, 2005};

    
    if(compare_date(d1,d2) == 0){
        cout << "They are the Same Date";
    }
    else if(compare_date(d1,d2) > 0){
        print_Date(d1); 
        cout << " is later than ";
        print_Date(d2);
    }
    else{
        print_Date(d1);
        cout << " is earlier than " ;
        print_Date(d2);
    }
    return 0;
}