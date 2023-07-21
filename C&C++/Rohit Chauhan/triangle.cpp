#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int x,y,z;
   cout<<"Enter the length of the sides: "<<endl;
   cin>>x>>y>>z;
   if(x==y && y==z)
      cout<<"Equilateral triangle"<<endl;
   else if(x==y || y==z || z==x)
      cout<<"Isoceless triangle"<<endl;
   else
     cout<<"Scalene triangle"<<endl;
     return 0;
}
