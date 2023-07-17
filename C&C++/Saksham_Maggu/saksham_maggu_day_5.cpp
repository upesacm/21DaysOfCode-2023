// ques 1: Write a program to print the Fibonacci series up to a given number using a for loop.
#include <iostream>
using namespace std;
void fibonacci(int n) 
{
    int a = 0, b = 1;

    for (int i = 0; i < n; i++) 
    {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
}

int main() 
{
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Fibonacci Series up to " << limit << ": ";
    fibonacci(limit);
}

//--------------------------------------------------------------------------------------------------------------

// ques 2: Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include <iostream>
using namespace std;
int lcm(int a, int b) 
{
    int greater = (a > b) ? a : b;

    while (true) 
    {
        if (greater % a == 0 && greater % b == 0) 
        {
            return greater;
        }
        greater++;
    }
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = lcm(num1, num2);
    cout << "LCM: " << result << endl;
}
