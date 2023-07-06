#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, r1, r2, d, real, img;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    }
    
    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        r1 = -b/(2*a);
        cout << "r1 = r2 =" << r1 << endl;
    }

    else {
        real = -b/(2*a);
        img =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "r1 = " << real << "+" << img << "i" << endl;
        cout << "r2 = " << real << "-" << img << "i" << endl;
    }

    return 0;
}
