#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a;
    float b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    double ans=pow(a,b);
    cout<<"The answer is: "<<ans<<endl;
    return 0;
}