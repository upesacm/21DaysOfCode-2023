// 1. Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.

#include <iostream>
using namespace std;

int fibonacci(int term_no)
{
    if(term_no == 0 || term_no == 1)
    {
        return term_no;
    }else{
        return (fibonacci(term_no-1) + fibonacci((term_no-2)));
    }
}

int main()
{
    int n;
    cout << "Enter the numbers till you want to print the fibonacci series  " << endl;
    cin >> n;
    cout << "Fibonacci series: ";
    int i = 0;
    while (i <= n){
        cout << fibonacci(i) << " ";
        i++;
    }
    return 0;
}
