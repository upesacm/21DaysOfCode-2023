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
    cout << "Enter your favorite color (0 - Red, 1 - Green, 2 - Blue, 3 - Yellow, 4 - Orange, 5 - Purple): ";
    int colorChoice;
    cin >> colorChoice;

    Colors favoriteColor = static_cast<Colors>(colorChoice);

    switch (favoriteColor) {
        case Red:
            cout << "Red is a passionate and energetic color!" << endl;
            break;
        case Green:
            cout << "Green represents growth, harmony, and renewal." << endl;
            break;
        case Blue:
            cout << "Blue is associated with calmness, stability, and trust." << endl;
            break;
        case Yellow:
            cout << "Yellow is a vibrant color that symbolizes happiness and optimism." << endl;
            break;
        case Orange:
            cout << "Orange is a warm and vibrant color." << endl;
            break;
        case Purple:
            cout << "Purple is often associated with creativity and royalty." << endl;
            break;
        default:
            cout << "Invalid color choice." << endl;
            break;
    return 0;
}
}
