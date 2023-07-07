/* Ques- Write a program to determine the roots of a 
quadratic equation (ax^2 + bx + c = 0) based on the values
of a, b, and c entered by the user. Handle all possible cases 
(real and distinct roots, real and equal roots, imaginary roots) 
and print the appropriate message.*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float discriminant;
    float root1,root2;
    printf("ax^2 + bx + c = 0 \n");
    printf("Enter the value of a, b, c in the above equation: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("The quadratic equation becomes: %fx^2 + %fx + %f = 0 \n",a,b,c);
    discriminant=(pow(b,2)) - (4*a*c);
    if(discriminant>0)
    {
        printf("Since discriminant %f >0, Hence roots are Real & Distinct \n",discriminant);
        root1=((-b)+sqrt(discriminant))/(2*a);
        root2=((-b)-sqrt(discriminant))/(2*a);
        printf("Therefore value of first root is %f , whereas value of second root is %f \n",root1,root2);
    }
    else if(discriminant==0)
    {
        printf("Since discriminant %f =0, Hence roots are Real & Equal \n",discriminant);
        root1=root2=(-b)/(2*a);
        printf("Therefore value of both the roots is %f \n",root1);
    }
    else
    {
        printf("Since discriminant %f <0, Hence roots are Imaginary \n",discriminant);
        root1=(-b)/(2*a);
        root2=(sqrt(-discriminant))/(2*a);
        printf("Therefore value of first root is %f + i%f , whereas value of second root is %f - i%f \n",root1,root2,root1,root2);
    }

}
