//1. Write a program that prompts the user to enter their name and prints "HELLO, <Name>!".
#include<iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: "<< endl;
    cin >> name;
    cout << "Hello, " + name + "!";
}
