#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the sides"<<endl;
    cin>>a>>b>>c;
    if(a == b && b == c){
        cout<<"equilateral"<<endl;
    }
    else if(a==b || b==c || c==a){
        cout<<"isosceles"<<endl;
    }
    else{
        cout<<"scalene"<<endl;
    }
}