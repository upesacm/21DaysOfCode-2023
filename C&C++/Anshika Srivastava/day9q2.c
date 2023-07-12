#include <stdio.h>

void rearrange(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        // if current element is positive
        if (key > 0)
            continue;
 
       //elements negative then shift
        j = i - 1;
        while (j >= 0 && arr[j] > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
    printf("%d",arr[j+1]);
        arr[j + 1] = key;
    }
    printf("Array after rearrangement\n");
    for(int i=0;i<size;i++)  
    {
      printf("%d ",arr[i]);
    }
}
 
int main()
{
    int arr[1000],size;
    printf("Enter size\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)  
    {
      scanf("%d",&arr[i]);
    }
    printf("Original array\n");
    for(int i=0;i<size;i++)  
    {
      printf("%d ",arr[i]);
    }
    rearrange(arr, size);
    return 0;
}
