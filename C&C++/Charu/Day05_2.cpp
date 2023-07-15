#include<iostream>
using namespace std;
int main(){
     int n1, n2, g, ans;


    cout << "Enter the two positive integer numbers: ";
    cin >> n1 >> n2;

    for (int i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            g = i;
        }
    }
    ans = (n1 * n2) / g;

    cout << "\nThe LCM of two positive numbers " << n1 << " & " << n2 << " is " << ans << ".\n";
    
    return 0;
}