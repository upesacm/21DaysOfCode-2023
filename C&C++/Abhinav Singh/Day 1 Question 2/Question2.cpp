//Abhinav Singh
#include<iostream>
using namespace std;

int sum(int Num){
    int sum = 0;
    for(int i = 0;i<3;i++){
        int a = Num%10;
        Num = Num/10;
        sum +=a;
    }
    return sum;
}

int main(){
    int Number;
    cout << "Enter the 3 Digit Number for the sum: ";
    cin>>Number;
    cout <<"Sum of the digits is: "<< sum(Number);
    
}
