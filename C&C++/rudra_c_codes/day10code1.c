#include <stdio.h>

void fibonacci(int n, int sequence[]) {
    if (n <= 0)
        return;

    if (n == 1) {
        sequence[0] = 0;
        return;
    }

    if (n == 2) {
        sequence[0] = 0;
        sequence[1] = 1;
        return;
    }

    fibonacci(n - 1, sequence);
    sequence[n - 1] = sequence[n - 2] + sequence[n - 3];
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    int sequence[n];
    fibonacci(n, sequence);

    printf("Fibonacci sequence up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}

