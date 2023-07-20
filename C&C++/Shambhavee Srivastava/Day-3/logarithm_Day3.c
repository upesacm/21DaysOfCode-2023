#include <stdio.h>
#include <math.h>

int main () {
   float x,res;
   printf("Enter the number:");
   scanf("%f", &x);
   res = log(x);
   printf("log(%lf) = %lf", x, res);
}