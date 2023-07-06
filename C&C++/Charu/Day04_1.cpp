#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"It is an Equilateral Triangle";
    }
    else if(a==b||b==c||c==a){
        cout<<"It is an Isosceles Triangle";
    }
    else{
        cout<<"It is a Scalene Triangle";
    }
    return 0;
}