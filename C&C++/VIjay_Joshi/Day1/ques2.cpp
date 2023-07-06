#include <iostream>
using namespace std;


// 2. Write a program to calculate the sum of the digits of a
//  three-digit number entered by the user.

int main(){
    int number;
    cout<<"Enter the 3 digit number"<<endl;
    cin>>number;
    if(number>=1000 ||number<100 ){
        cout<<"Please only Enter 3 digit number"<<endl;
        return 0;
    }

    int sum=0;
   int temp=number;
    for(int i=0;i<3;i++){
    sum+=temp%10;
    temp=temp/10;
    }
cout<<"sum of digits is: "<<sum;
  return 0;
}
