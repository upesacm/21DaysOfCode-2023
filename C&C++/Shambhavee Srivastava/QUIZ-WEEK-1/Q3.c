#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int max_subarray_sum(int n, int arr[]) {
    int max_sum = arr[0];  
    int current_sum = arr[0];  

    for (int i = 1; i < n; i++) {
    
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = max_subarray_sum(n, arr);
    printf("%d\n", result);
    return 0;
}