#include <iostream>
using namespace std;
int fib(int n)
{
    int t0=0, t1=1, s;
    if(n<=1)
     return n;
    else
     {
        for(int i=2;i<=n;i++)    
        {
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        return s;
     }
}
int main()
{
    int z=fib(5);
    cout<<z<<endl;
    int x,y;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>x>>y;
    int lcm;
    if(x>y)
      lcm=x;
    else
      lcm=y;
    while(1)
    {
      if(lcm%x==0 && lcm%y==0)
        {
          cout<<lcm;
          break;
        }
      ++lcm;   
    }

}
