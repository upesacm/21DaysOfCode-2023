#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double r, c;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    c = 2 * PI * r;

    cout << "The circumference of the circle is: " << c << endl;

    return 0;
}
