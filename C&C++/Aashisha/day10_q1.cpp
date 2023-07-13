//Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.
#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num-1)+fibonacci(num-2));
    }
}
int main()
{
    int n;
    cout<<"Enter the limit: "<<endl;
    cin>>n;
    cout<<"The series is: "<<endl;
    for (int i=0;i<=n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
