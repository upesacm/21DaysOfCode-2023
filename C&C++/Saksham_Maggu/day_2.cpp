// ques 1: Write a program to check if a given year is a leap year or not using the logical operators.
#include <iostream>
using namespace std;
bool isLeapYear(int year) 
{
    // Leap years are divisible by 4
    bool divisible_by_4 = year % 4 == 0;
    
    // Leap years are not divisible by 100, unless divisible by 400
    bool not_divisible_by_100 = year % 100 != 0;
    bool divisible_by_400 = year % 400 == 0;

    // Check if the year meets the leap year conditions
    return (divisible_by_4 && not_divisible_by_100) || divisible_by_400;
}
int main() 
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) 
    {
        cout << year << " is a leap year." << std::endl;
    } 
    else 
    {
        cout << year << " is not a leap year." << std::endl;
    }
}

//--------------------------------------------------------------------------------------------------

// ques 2: Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.
#include <iostream>
using namespace std;
void swapWithoutTemp(int& a, int& b) 
{
    // Using bitwise XOR to swap the values
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main() 
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout<<num1<<" "<<num2<<endl;

    swapWithoutTemp(num1, num2);

    cout<<num1<<" "<<num2<<endl;
}
