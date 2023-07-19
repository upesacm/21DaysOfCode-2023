#include <iostream>
#include <string>

using namespace std;

Define the Colors enumeration
enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() 
{
    string favoriteColor;
    cout << "What is your favorite color? ";
    cin >> favoriteColor;

    for (auto& c : favoriteColor) {
        c = tolower(c);
    }

    if (favoriteColor == "red") 
    {
        cout << "Red is a passionate color!";
    } 
    else if (favoriteColor == "green") 
    {
        cout << "Green represents nature and freshness!";
    } 
    else if (favoriteColor == "blue")
    {
       cout << "Blue is associated with calmness and tranquility!";
    } 
    else if (favoriteColor == "yellow")
    {
        cout << "Yellow is a bright and cheerful color!";
    } 
    else if (favoriteColor == "orange") 
    {
        cout << "Orange is a vibrant and energetic color!";
    } 
    else 
    {
        cout << "Sorry, I'm not familiar with that color.";
    }

    return 0;
}
