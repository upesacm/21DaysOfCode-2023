#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==k){
            count++;
        }
    }
}
        printf("%d",count);
    return 0;
}
