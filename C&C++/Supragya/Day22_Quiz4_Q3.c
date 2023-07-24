#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int sum=0;
    int term=0;
    if(n==0 || n==1){
        sum=0;
        term=0;
    }
    if(n==2){
        sum=1;
        term=1;
    }
    int a=0,b=0,c=1,d;
    sum=1;
    for(int i=3;i<n;i++){
        d=a+b+c;
        sum+=d;
        a=b;
        b=c;
        c=d;  
    }
    term=c;
    printf("%d\n%d",term,sum);
    return 0;
}
