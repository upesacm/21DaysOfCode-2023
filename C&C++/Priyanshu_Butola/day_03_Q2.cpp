#include <iostream>
#include <cmath>

using namespace std;

int naturalLog(double num)
{
    double res;
    res = log(num);

    return res;
}

int main()
{

    double num;
    cin >> num;

    cout << "Natural Log of " << num << " is " << naturalLog(num);
    return 0;
}