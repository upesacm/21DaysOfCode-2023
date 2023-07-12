#include<stdio.h>

int main() {
    int arr[100], n,sum =0;
    printf("Enter number of elements you want: ");
    scanf("%d", &n);
    for(int i=0;i < n;i++){
        printf("Enter single element %d:", i+1);
        scanf("%d", &arr[i]);
    }
   printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrangeArray(arr, n);

    printf("\nRearranged Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
    
void rearrangeArray(int arr[], int n) {
    int i, j, temp;

    j = 0; // Index to track the position of the last negative number

    // Traverse the array
    for (i = 0; i < n; i++) {
        // If the current element is negative
        // swap it with the element at index 'j'
        if (arr[i] < 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}