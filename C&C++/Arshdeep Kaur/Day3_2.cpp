#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    float ans = log(num);
    cout << "The logarithm value (base-e) of " << num << " is: " << ans << endl;

    return 0;
}
