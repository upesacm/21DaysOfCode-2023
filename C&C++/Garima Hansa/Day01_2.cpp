//2. Write a program to calculate the sum of the digits of a three-digit number entered by the user.
#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    int q;
    cout << "Enter a three digit number: "<<endl;
    cin >> num;

    for (int i = 0; i < 3; i++)
    {
        q = num%10;
        sum += q;
        num = num/10;
    }
    
    cout << "The sum of digits of the given number is " << sum;
}