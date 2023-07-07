#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int base, power;

    cout << "Enter the base of the number: ";
    cin >> base;
    cout << "Enter the power that you want to calculate: ";
    cin >> power;

    int ans = pow(base, power);
    cout << base << " raised to the power " << power << " is: " << ans << endl;

    return 0;
}
