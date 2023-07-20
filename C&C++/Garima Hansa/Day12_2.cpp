//  Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.). Write a program that asks the user to enter their favorite color and displays a message based on their choice.

#include <iostream>
using namespace std;

enum Colors
{
    red = 1,
    yellow = 2,
    blue = 4,
    orange = 3,
    green = 6,
    violet = 5
};

int main()
{
    cout << "Enter your Favorite Color" << endl;
    string userinput;
    cin >> userinput;
    Colors userchoice;
    
    switch (userinput)
    {
    case userinput == "RED" || "Red" || "red":
        userchoice = 1;
        break;
    
    default:
        break;
    }

}