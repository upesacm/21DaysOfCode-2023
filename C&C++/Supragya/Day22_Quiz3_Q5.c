#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
        }
    int k;
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<n;i++){
           if(arr[i]==k){
              count=i;
               break;
           }
        }
    if(count!=0){
        printf("%d",count);
    }
    else{
         printf("-1");
    }
    return 0;
}
