
#include <iostream>
#include<math.h>
using namespace std;


int armstrong(int n){
    int a=n,c=0;

    while(n>0){
        c=c+pow(n%10,3);
        n=n/10;


    }
    if(c==a){
        cout<<"It is a Armstrong no.";
    
    }
    else{
        cout<<"it is not an armstrong no";
    }
return 0;
}

int main()
{
    int n=4;
    cout<<("enter the no.");
    cin>>n;
    armstrong(n);

return 0;
}
