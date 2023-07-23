#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}
