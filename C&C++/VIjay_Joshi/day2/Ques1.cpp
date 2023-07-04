#include <bits/stdc++.h>

using namespace std;

int main(){
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;


     if(year%4==0 &&year%100!=0 ||year%400==0){
        cout<<"Year "<<year<<" is a leap year";
    }
    else{
        cout<<"No "<<year<<" is not a leap year";
    }
return 0;
}
