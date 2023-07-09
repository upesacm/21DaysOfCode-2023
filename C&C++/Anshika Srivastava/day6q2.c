#include <stdio.h>
int main()
{
    int arr[1000];
    printf("Enter array size\n");
    int size;
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size - 1; i++)  //bubble sort
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("Sorted array\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
