//Write a program to find the maximum sum continuous subarray within a given array of integers.
//The program should return the maximum sum of the subarray.

#include <stdio.h>

int max_subarray_sum(int arr[], int n) {
    if (n == 0)
        return 0;

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i] > current_sum + arr[i])
            current_sum = arr[i];
        else
            current_sum = current_sum + arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
    }
    return max_sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = max_subarray_sum(arr, n);
    printf("%d", max_sum);

    return 0;
}
