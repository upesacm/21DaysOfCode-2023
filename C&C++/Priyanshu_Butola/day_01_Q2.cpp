#include <iostream>

using namespace std;

int sumOfDigits(int n){

    int sum= 0;

    while(n>0){

        sum += n%10;

        n = n/10;
    }

    return sum ;
}

int main(){

    int n;

    cout<<"Enter a three digit number: "<<endl;

    cin>>n;

    cout << "The sum of digits of "<<n<<" is "<<sumOfDigits(n);

    return 0;
}