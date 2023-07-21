#include <iostream>
using namespace std;

int main() 
{

    int a, b, temp;
    int *ptr1, *ptr2;

    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;

    cout<<"\nBefore swapping a= "<<a<<"and b= "<<b<<endl;

    ptr1 = &a;
    ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout<<"\nAfter swapping a= "<<a<<"and b= "<<b<<endl;

    return 0;

}