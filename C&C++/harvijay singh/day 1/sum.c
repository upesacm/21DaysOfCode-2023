//sum of digits of 3 digit no

#include<stdio.h>

int main(){
    int n;
    printf("enter the three digit no :\t");
    scanf("%d",&n);
    int sum = 0;

    if(n>99 && n<1000){
        while(n>0){
            int k = n%10;
            sum += k;
            n = n/10;
        }
    printf("the sum of the 3 digits is :\t%d\n", sum);
    }

    else(printf("enter valid number\n"));
    

     
}