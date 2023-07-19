#include <iostream>  
using namespace std;  
int sumnum(int num){
    int sum=0,digit=0;
    while (num!=0) {
        digit = num %10 ;
        sum+=digit;
        num/=10;
    }
    return sum;

}
int main()  
{  
int num;    
cout<<"Enter a number: ";    
cin>>num;
cout<<"Sum is= "<<sumnum(num)<<endl;    
return 0;  
} 
