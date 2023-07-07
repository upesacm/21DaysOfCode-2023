#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int x,n,y,z;
   cout<<"Enter a number: "<<endl;
   cin>>x;
   cout<<"Enter the power: "<<endl;
   cin>>n;
   y=pow(x,n);
   cout<<y<<endl;
   cout<<"Enter the number for calculating log base e: "<<endl;
   cin>>z;
   cout<<log(z);
}
