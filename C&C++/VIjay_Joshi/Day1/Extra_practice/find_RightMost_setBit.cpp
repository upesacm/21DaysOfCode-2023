
//Using Dp I am finding Nth FIbbonacci Number;

  #include <iostream>
#include <bits/stdc++.h>
using namespace std;


 int nthFibonacci(int n){
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2]);
        }
        return dp[n];
        
    }

int main(){
    int n;
    cout<<"Enter the no :";
    cin>> n;
  int NthFibbo= nthFibonacci(n);
  cout<<NthFibbo;
return 0;
}
