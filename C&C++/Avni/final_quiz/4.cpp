#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a=0,b=0,c=1,d=0,sum=1;
    
    for(int i=3;i<n;i++)
    {
        d=a+b+c;
        sum+=d;
        a=b;
        b=c;
        c=d;
    }
    cout<<d<<endl;
    cout<<sum<<endl;
    return 0;
}
