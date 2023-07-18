#include <stdio.h>
int sortedArray(int arr[], int n){
     if(n==1 || n==0)
         return 1;
     
     for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i])
            return 0;
    }
    return 1;
}
int main(){
    int n;
    int arr[n];
    printf("Entter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(sortedArray(arr,n))
    printf("Yes, We have a sorted array!");
    else
    printf("Sorry, we don't have a sorted array!");
}