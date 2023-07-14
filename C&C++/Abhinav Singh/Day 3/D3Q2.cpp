//Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.
#include<iostream>
#include<cmath>
using namespace std;

int CalcLog(int a){
    double result;

	result = log (a);
	cout << "log(x) = " << result << endl;
}

int main(){
    int a;
    cout <<" Enter the Value for Log calculation : ";
    cin >> a;
    CalcLog(a);
}