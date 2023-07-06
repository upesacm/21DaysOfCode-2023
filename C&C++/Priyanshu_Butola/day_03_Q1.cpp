#include <iostream>
#include <cmath>

using namespace std;

int powOf(double n, double exp)
{

    double res;

    res = pow(n, exp);

    return res;
}

int main()
{
    double n, exp;

    cout << "Enter number" << endl;
    cin >> n;
    cout << "Enter exponent" << endl;
    cin >> exp;

    cout << "The result for " << n << " raised to " << exp << " is " << powOf(n, exp);

    return 0;
}