#include <iostream>
using namespace std;
enum Colors {
    RED,
    BLUE,
    GREEN,
    YELLOW,
    PURPLE
};
void displayMessage(Colors color) {
    switch (color) {
        case RED:
            cout << "The color is Red" << endl;
            break;
        case BLUE:
            cout << "The color is Blue." << endl;
            break;
        case GREEN:
            cout << "The color is Green." << endl;
            break;
        case YELLOW:
            cout << "The color is Yellow." << endl;
            break;
        case PURPLE:
            cout << "The color is purple." << endl;
            break;
        default:
            cout << "Unknown color." << endl;
            break;
    }
}

int main() {
    int colorChoice;

    cout << "Enter your favorite color (0 = RED, 1 = BLUE, 2 = GREEN, 3 = YELLOW, 4 = PURPLE): ";
    cin >> colorChoice;

    if (colorChoice >= 0 && colorChoice <= 4) {
        Colors favoriteColor = static_cast<Colors>(colorChoice);
        displayMessage(favoriteColor);
    } else {
       cout << "Invalid color choice." << endl;
    }

    return 0;
}