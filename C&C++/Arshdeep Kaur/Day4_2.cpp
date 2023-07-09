# include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, root1, root2, d, rPart, iPart;
    cout << "Enter the coefficients of a, b and c: ";
    cin >> a >> b >> c;
    d = (b*b) - (4*a*c);
    
    if (d > 0) {
        //real & distinct roots
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        cout << "The real and distinct roots are: " << root1 << " and " << root2 << endl;
    }
    
    else if (d == 0) {
        root1 = -b/(2*a);
        cout << "The real and equal roots are: " << root1 << " and " << root1 << endl;
    }

    else {
        rPart = -b/(2*a);
        iPart = sqrt(-d)/(2*a);
        cout << "The imaginary roots are: " << rPart << "+" << iPart << "i and " << rPart << "-" << iPart << "i" << endl;
    }

    return 0;
}
