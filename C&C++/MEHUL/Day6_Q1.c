#include<stdio.h>

int main()
{
    int i, r, min;

    printf("Enter the range of array: ");
    scanf("%d", &r);

    int arr[r];

    for(i=0; i<r; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i=1; i<r; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("Minimum value is %d", min);
}
