#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double circumference = 2 * PI * radius;
    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}
