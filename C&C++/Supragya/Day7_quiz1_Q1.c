#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    int min_index = 0;
    int max_index = 0;
    
    for(i=1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    
    int sum = min_index + max_index;
    printf("%d\n", sum);
    
    return 0;
}
