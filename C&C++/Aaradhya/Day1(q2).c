// question 2)

#include <stdio.h>
int main(){
    int n;    
  n = input();
  if(n>999||n<100){
    while(n>999||n<100){
    printf("wrong input\n");
    n = input();
    }
  }
  sum(n);
  return 0;
}

int input(){
  int num;
  printf("enter a 3 digit num:");
  scanf("%d", &num);
  return num;
}

int sum(int n){
  int a = n%10;
  int b = (n%100 - a)/10;
  int c = (n%1000 - b*10 - a)/100;
  return printf("the sum is : %d", a+b+c);
}
