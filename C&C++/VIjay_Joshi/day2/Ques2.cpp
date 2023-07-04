
// 2. Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the two numbers a b: ";
     cin>>a >>b;
    
    // a=a*b;
    // b=a/b;
    // a=a/b;
// using xor operator 
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
     cout<<"after swapping now a is "<<a <<endl<<"and b is "<<b;
return 0;


}
