#include <stdio.h>

void swap(int,int);
void main(){
    int a,b;
    printf("Enter the numbers you want to be swapped: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping :: Values of a : %d \t  b : %d \n", a, b);
    swap(a,b);
   
}
void swap(int a, int b){

    a^=b;
    b^=a;
    a^=b;
    printf("After Swapping :: Values of a : %d \t  b : %d \n", a, b);

}