#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter lengths of sides of the triangle\n");
  scanf("%d %d %d", &a, &b, &c); //taking input
  if(a+b>c && b+c>a && a+c>b) //checking for a correct triangle
  {
    //checking length
    if(a==b)
    {
      if(a==c)
        printf("this is an equilateral triangle");
      else
        printf("this is an isoceles triangle");
    }
    else if(b==c)
      printf("this is an isoceles triangle");
    else if(a==c)
      printf("this is an isoceles triangle");
    else
      printf("this is a scalene triangle");
  }
  else
    printf("this is not a triangle");
  return 0;
}
