#include <iostream>
#include <string>
using namespace std;

int main() {
    int favColor;
    cout << "Enter your favorite color (1 - Red, 2 - Green, 3 - Blue, 4 - Yellow, 5 - Orange, 6 - Purple): ";
    cin >> favColor;

    string colorName;
    switch (favColor) {
        case 1:
            colorName = "Red";
            cout << "Red is an attractive color." << endl;
            break;
        case 2:
            colorName = "Green";
            cout << "Green represents nature and growth." << endl;
            break;
        case 3:
            colorName = "Blue";
            cout << "Blue is calming like the ocean." << endl;
            break;
        case 4:
            colorName = "Yellow";
            cout << "Yellow symbolizes sunshine and happiness." << endl;
            break;
        case 5:
            colorName = "Orange";
            cout << "Orange is energetic and lively." << endl;
            break;
        case 6:
            colorName = "Purple";
            cout << "Purple is royalty and creativity." << endl;
            break;
        default:
            cout << "Invalid color choice!" << endl;
            return 0;
    }

    cout << "Your favorite color is " << colorName << "." << endl;

    return 0;
}
