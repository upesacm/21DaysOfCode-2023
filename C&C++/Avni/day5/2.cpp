#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<< "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int greater = (num1 > num2) ? num1 : num2;
    while (true) 
    {
        if (greater % num1 == 0 && greater % num2 == 0)
        {
            cout << "The LCM is "<< greater <<endl;
            break;
        }
        greater++;
    }
}