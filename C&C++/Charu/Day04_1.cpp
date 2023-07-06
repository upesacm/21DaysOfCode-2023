#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"Equilateral Triangle";
    }
    else if(a==b||b==c||c==a){
        cout<<"Isosceles Triangle";
    }
    else{
        cout<<"Scalene Triangle";
    }
    return 0;
}