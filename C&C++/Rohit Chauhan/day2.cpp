#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Hello "<<name;
}
/*
int main()
{
    int x,y;
    cout<<"Enter x  and y "<<endl;
    cin>>x>>y;
    x =x ^ y;
    y=x ^ y ;
    x=x ^ y ;
    cout<<x<<" "<<y<<endl;
    return 0;
}
*/
/*
int main()
{
     int year;
  cout<<"Enter Year: ";
  cin>>year;
  if (year%4==0)
  {
    if(year%100==0)
    {
      if(year%400==0)
      cout<<"year is a leap year";
      else
      cout<<"year is not leap";
    }
    else  
    cout<<"leap year";
  }
  else
   cout<<"not leap";
  return 0;
}
*/