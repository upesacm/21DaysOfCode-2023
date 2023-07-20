#include<stdio.h>

void printArray(int arr[], int r)
{
    int i;

    for(i=0; i<r; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}

void bubble_sort(int arr[], int r)
{
    int i, j, s;

    for(i=0; i<r; i++)
    {
        for(j=0; j<r-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                s = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = s;
            }
        }
    }

    printf("Array after sorting: \n");
    
    printArray(arr, r);
}

int main()
{
    int i, r;

    printf("Enter the range of array: ");
    scanf("%d", &r);

    int arr[r];

    for(i=0; i<r; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting: \n");

    printArray(arr, r);

    bubble_sort(arr, r);
}
