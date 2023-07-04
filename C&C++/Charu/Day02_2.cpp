//swap numbers using xor
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the number a: "<< endl;
    cin>>a;
    cout << "Enter the number b: "<< endl;
    cin>>b;
    cout<<"Before swapping a is : "<<a<<" and b is "<< b <<endl;
   
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping a is : "<<a<<" and b is "<< b <<endl;
    return 0;
}