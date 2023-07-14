#include <iostream>
using namespace std;

enum Colors {
    Red,
    Green,
    Blue,
    Yellow,
    Orange,
    Purple
};

int main() {
    int favColor;
    cout << "Enter your favorite color (0 - Red, 1 - Green, 2 - Blue, 3 - Yellow, 4 - Orange, 5 - Purple): ";
    cin >> favColor;

    switch (favColor) {
        case Red:
            cout << "Red is a attractive color" << endl;
            break;
        case Green:
            cout << "Green represents nature and growth." << endl;
            break;
        case Blue:
            cout << "Blue is calming like ocean" << endl;
            break;
        case Yellow:
            cout << "Yellow symbolizes sunshine and happiness." << endl;
            break;
        case Orange:
            cout << "Orange is energetic and lively." << endl;
            break;
        case Purple:
            cout << "Purple is  royalty and creativity." << endl;
            break;
        default:
            cout << "wrong color " << endl;
    }

    return 0;
}
