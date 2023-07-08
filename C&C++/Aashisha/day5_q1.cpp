#include <iostream>
using namespace std;
int main()
{
    int limit,sum=0;
    cout<<"Enter the final limit: "<<endl;
    cin>>limit;
     int t1=0,t2=1,next_term;
    cout<<"The Fibonacci series is: "<<t1 << " " <<t2<<" ";
    next_term=t1+t2;
    while(next_term<=limit)
    {
        cout<<next_term<<" "; 
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
return 0;
}
