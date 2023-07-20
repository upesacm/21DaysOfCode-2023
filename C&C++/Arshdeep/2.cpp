#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the 3-digit number: ";
    cin >> n;

    int sum=0;
    for (int num=n; num>0; num/10) {
        int digit = num%10;
        sum+=digit;
        num = num/10;
    }

    cout << "The sum of the digits of " << n << " is: " << sum;

}
