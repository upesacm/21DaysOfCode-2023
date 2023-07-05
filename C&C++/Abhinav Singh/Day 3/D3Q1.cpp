//Write a program to calculate the power of a number using the pow() function from the <cmath> library.
#include<iostream>
#include<cmath>
using namespace std;

int Npower(int a,int b){
    return pow(a,b);
}

int main(){
    int a;
    int b;
    cout << "Enter A:";
    cin>>a;
    cout << "Enter B";
    cin>>b;

    cout<<"Answer of A^B is : " << Npower(2,3);
}