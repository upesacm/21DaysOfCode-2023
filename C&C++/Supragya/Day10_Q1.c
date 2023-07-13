// Q1 Write a recursive function to calculate the Fibonacci sequence up to a given number and return the 
//sequence as an array.
#include<stdio.h>
void Fibonacci(int sequence[],int n){
    int i=0;
    if(n<=0){
        return;
    }
    else if( n == 1 ){
    sequence[i]=0;
    }
    else if(n==2){
    sequence[i]=0;
    sequence[i+1]=1;
    }
    else{
        Fibonacci(sequence,n-1);
        sequence[i+n-1]=sequence[i+n-2] + sequence[i+n-3];
    }
    
}
int main(){
    int n;
    printf("Enter the number of terms in sequence \n");
    scanf("%d",&n);
    int sequence[n];
    Fibonacci(sequence,n);
    printf("Fibonacci sequence = \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
}
