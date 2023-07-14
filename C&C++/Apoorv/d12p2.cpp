#include<iostream>

using namespace std;

enum Colors
{
    Red,
    Green,
    Blue,
    Black,
    White
};

int main()
{
    string ask;
    cout << "Please enter your favorite color: ";
    cin >> ask;

    Colors favoriteColor;

    if (ask == "Red")
        favoriteColor = Red;
    else if (ask == "Green")
        favoriteColor = Green;
    else if (ask == "Blue")
        favoriteColor = Blue;
    else if (ask == "Black")
        favoriteColor = Black;
    else if (ask == "White")
        favoriteColor = White;
    else
    {
        cout << "Invalid color choice.\n";
        return 0;
    }

    switch (favoriteColor)
    {
        case Red:
            cout << "Your favorite color is Red!\n";
            break;
        case Green:
            cout << "Your favorite color is Green!\n";
            break;
        case Blue:
            cout << "Your favorite color is Blue!\n";
            break;
        case Black:
            cout << "Your favorite color is Black!\n";
            break;
        case White:
            cout << "Your favorite color is White!\n";
            break;
    }

    return 0;
}
