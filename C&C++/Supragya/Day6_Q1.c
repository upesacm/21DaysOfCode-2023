// Q1 Write a C/C++ program to find the second smallest element in an integer array.
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements you want to insert in the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
int x=INT_MAX,y=INT_MAX;
for(int i=0;i<n;i++){
if(x>array[i]){
    y=x;
    x = array[(i)];
}
else if(y>array[i]&&x!=array[i]){
    y = array[(i)];
}
}
if(y==INT_MAX){
    printf("There is no second smallest element in the array\n");
}
else{
printf("\nSmallest number =%d \n",x);
printf("Second smallest number =%d \n",y);
}
}
