// Q1 Write a program to print the Fibonacci series up to a given number using a for loop.
#include<stdio.h>
void printFibonacci(int num){
    int first =0,second=1,next;
    printf("Fibonacci series up to %d: ", num);
    printf("%d %d ", first, second);
    for(int i=3;i<=num;i++){
        next = first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }
}
int main(){
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printFibonacci(n);
}
