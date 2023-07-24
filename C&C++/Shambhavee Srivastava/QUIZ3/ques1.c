#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int countPairs(int n, int array[], int target) {
    int total_pairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] + array[j] == target) {
                total_pairs++;
            }
        }
    }
    return total_pairs;
}
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int target;
    scanf("%d", &target);
    int result = countPairs(n, array, target);
    printf("%d", result);

    return 0;
}
