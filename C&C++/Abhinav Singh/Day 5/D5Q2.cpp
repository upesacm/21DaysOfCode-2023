//  Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include<iostream>
using namespace std;

int getLCM(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }  
    return num1;
}

int main() {
    int num1, num2;
    cout << "Enter the First number :";
    cin>>num1;
    cout << "Enter the Second number : ";
    cin>>num2;
    
    int hcf = getLCM(num1, num2);
    int lcm = (num1 * num2) / hcf;
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;

    return 0;
}
