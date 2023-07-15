//Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.). Write a program that asks the user to enter their favorite color and displays a message based on their choice.

#include <iostream>
using namespace std;

int main() {

    enum Colors {
        Red, 
        Orange, 
        Yellow, 
        Green, 
        Blue, 
        Indigo, 
        Violet, 
        Pink, 
        Black, 
        White
    };

    int col;
    cout << "Enter your favourite color: " << endl;
    cout << "0 - Red" << endl;
    cout << "1 - Orange" << endl;
    cout << "2 - Yellow" << endl;
    cout << "3 - Green" << endl;
    cout << "4 - Blue" << endl;
    cout << "5 - Indigo" << endl;
    cout << "6 - Violet" << endl;
    cout << "7 - Pink" << endl;
    cout << "8 - Black" << endl;
    cout << "9 - White" << endl;
    cout << endl;
    std::cin >> col;
    Colors color = static_cast<Colors>(col);
  
    switch (color) {
        case 0:
            cout << "Your favourite color is Red" << endl;
            break;
        case 1:
            cout << "Your favourite color is Orange" << endl;
            break;
        case 2:
            cout << "Your favourite color is Yellow" << endl;
            break;
        case 3:
            cout << "Your favourite color is Green" << endl;
            break;
        case 4:
            cout << "Your favourite color is Blue" << endl;
            break;
        case 5:
            cout << "Your favourite color is Indigo" << endl;
            break;
        case 6:
            cout << "Your favourite color is Violet" << endl;
            break;
        case 7:
            cout << "Your favourite color is Pink" << endl;
            break;
        case 8:
            cout << "Your favourite color is Black" << endl;
            break;
        case 9:
            cout << "Your favourite color is White" << endl;
            break;
        default:
            cout << "You do not have a favourite color" << endl;

    }

    return 0;
}
