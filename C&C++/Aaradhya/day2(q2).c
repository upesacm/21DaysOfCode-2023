//question 2

#include <stdio.h>
int main()
{
  int a,b;
  printf("enter 2 num:\t");
  scanf("%d %d", &a, &b);
  //swapping using XOR operator
  a = a^b;
  b = a^b;
  a = a^b;
  printf("swapped nums are:\n %d, %d", a,b);
  return 0;
}
