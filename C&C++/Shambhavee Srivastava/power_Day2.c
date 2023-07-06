#include <stdio.h>
#include <math.h>

void power(int,int);
void main(){
int n,i,res;
printf("enter the number:");
scanf("%d", &n);
printf("enter the desired power:");
scanf("%d", &i);
power(n,i);

}
void power(int n, int i){
int res = pow(n,i);
printf("RESULT : %d", res);
}
