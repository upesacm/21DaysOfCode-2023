//2. Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;

    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
    cout << "Your numbers are "<<endl<< "a = " << a <<endl << "b = " << b <<endl << endl;
    
    //The logic behind is that when applying bitwise XOR operator on an integer, it considers the binary equivalent of that number.
    // a^a=0 and a^0 = a
    // a^b= will give a value c whose binary equvalent will have 1 for all the bits that were different in both the values (a and b)
    int c = a^b;
    a = a^c;
    b = b^c;

    cout << "...Swapping values using XOR..." << endl << endl;
    cout << "Now, your numbers are: "<<endl << "a = " << a <<endl << "b = " << b <<endl;
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
}
