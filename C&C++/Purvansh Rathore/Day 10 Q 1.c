#include<stdio.h>

void recFibonacci(int n, int sequence[], int index){
    if(n >= 0){
        if(index == 0 || index == 1){
            sequence[index] = index;
        }
        else{
            sequence[index] = sequence[index - 1] + sequence[index - 2];
        }
        
        recFibonacci(n - 1, sequence, index + 1);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int sequence[n];
    recFibonacci(n, sequence, 0);

    printf("Fibonacci sequence up to %d: ", n);
    for(int i = 0; i < n; i++){
        printf("%d ", sequence[i]);
    }

    return 0;
}
