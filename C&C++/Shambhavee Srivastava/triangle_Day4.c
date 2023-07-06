
#include <stdio.h>
void sides(int, int, int);
int main() {
   int s1,s2,s3;
   printf("enter first side: ");
   scanf("%d", &s1);
   printf("enter second side: ");
   scanf("%d", &s2);
   printf("enter third side: ");
   scanf("%d", &s3);
   sides(s1,s2,s3);
}
   
   void sides(int s1,int s2,int s3){
    if(s1+ s2 > s3 && s2 + s3 >s1 && s1 + s3 > s2){
   
   if(s1==s2 && s2==s3) printf("It is an Equilteral triangle");
   else if(s1==s2 || s2==s3 || s1==s3) printf("It is an Isoceles triangle");
   else printf("It is a Scalene triangle");
    }
else {
    printf("Please provide valid sides");
     }
}