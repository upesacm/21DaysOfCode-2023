#include <iostream>
using namespace std;
int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

  =
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        
        cout << std::endl;
    }

    return 0;
}
