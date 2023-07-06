#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double x,y;
    cout<<"Enter base and exponent"<<endl;
    cin>>x>>y;
    double power = pow(x,y);
    cout<<x<<" raised to the power "<<y<<" is "<<power<<endl;
    return 0;
}
 
