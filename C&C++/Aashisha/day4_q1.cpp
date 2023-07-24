#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter side 1 of the triangle: "<<endl;
    cin>>a;
    cout<<"Enter side 2 of the triangle: "<<endl;
    cin>>b;
    cout<<"Enter side 3 of the triangle: "<<endl;
    cin>>c;
    if(a==b && b==c && a==c)
    {
        cout<<"It is an equilateral triangle."<<endl;
    }
    else if(a==b||b==c||a==c)
    {
        cout<<"It is an isosceles triangle."<<endl;
    }
    else{
        cout<<"It is a scalene triangle."<<endl;
    }
    return 0;
}
