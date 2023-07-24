 // We have an array of quantum particles represented as qubits. Count the pairs of quantum particles whose states sum up to a particular quantum target state.

#include <stdio.h>

int countPairs(int n, int arr[], int target) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n, target;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    int result = countPairs(n, arr, target);
    
    printf("%d\n", result);
    
    return 0;
}
