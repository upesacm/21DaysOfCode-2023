// ques 1: Write a program that prompts the user to enter their name and prints "HELLO, <Name>!".
#include<iostream>
#include<string>
using namespace std;
int main() 
{
    string s;
    cout<<"Enter name:"<<endl;
    cin>>s;
    cout<<"HELLO, "<<s<<"!"<<endl;
}

//-----------------------------------------------------------------------------------------------------

// ques 2: Write a program to calculate the sum of the digits of a three-digit number entered by the user.
#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
    int digit_sum = 0;
    int temp = n;
    while (temp != 0) 
    {
        int digit = temp % 10;
        digit_sum += digit;
        temp /= 10;
    }
    return digit_sum;
}
int main() 
{
    int n;
    cout<<"Enter a 3 digit number:"<<endl;
    cin>>n;
    int sum=sum_of_digits(n);
    cout<<"Sum of digits: "<<sum<<endl;
}
