# include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "It is an equilateral traingle" << endl;
    }

    else if (a==b || b==c || c==a) {
        cout << "It is an isosceles traingle" << endl;
    }

    else {
        cout << "It is an scalene traingle" << endl;
    }

    return 0;
}
