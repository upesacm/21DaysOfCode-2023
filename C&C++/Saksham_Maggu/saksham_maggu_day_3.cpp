// ques 1: Write a program to calculate the power of a number using the pow() function from the <cmath> library
#include <iostream>
#include <cmath>
using namespace std;
long long power(int a, int b)
{
    return pow(a, b);
}
int main() 
{
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter b:"<<endl;
    cin>>b;
    
    long long ans=power(a, b);
    
    cout<<ans<<endl;
}

//---------------------------------------------------------------------------------------------------------------------------

// ques 2: Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.
#include <iostream>
#include <cmath>
using namespace std;
float logarithm(int a)
{
    return log(a);
}
int main() 
{
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;
    
    float ans=logarithm(a);
    
    cout<<ans<<endl;
}
