//                                                                    {Day-5 Programs}
//Q-1. Write a program to print the Fibonacci series up to a given number using a for loop
#include <iostream>
using namespace std;
int main() {
    int num1 = 0, num2 = 1, nextNum, terms;
    cout << "Enter the number of terms : ";
    cin >> terms;

    cout << "Fibonacci Series up to -> " << terms << " terms : ";

    for (int i = 1; i <= terms; ++i) {
        cout << num1 << " ";
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
return 0;
}
//2. Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include <iostream>
using namespace std;
int findLCM(int num1, int num2);
int main() {
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    int lcm = findLCM(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is : " << lcm << endl;
return 0;
}
int findLCM(int num1, int num2) {
    int lcm = (num1 > num2) ? num1 : num2;
    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        ++lcm;
    } return lcm;
}


