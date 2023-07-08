#include<stdio.h>
#include<math.h>
int main()
{
printf("Enter  coefficients of quadratic equation\n");
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
float d=(b*b)-(4*a*c);  //discriminant
if(d>=0)   //real roots
{
float root1= (-b+sqrt(d))/(2*a);
float root2= (-b-sqrt(d))/(2*a);
if(d==0)
printf("Both roots are real and equal to %f",root1);
else
printf("Roots are real but distinct %f %f",root1,root2);
}
else{
printf("Imaginary roots");       //root1=-b/2a + i (root -(b*b - 4ac))/2a  
float i;                  //root2= -b/2a -i (root -(b*b - 4ac))/2a  
float r= -b/(2*a);
float root = sqrt(-d)/(2*a);
printf("root 1= %f + %f i",r,root);
printf("root 2= %f - %f i",r,root);
return 0;
}
}
