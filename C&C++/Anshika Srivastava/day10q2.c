#include <stdio.h>
int sort(int arr[], int size)
{
    if (size <= 1)
        return 1;  
    if (arr[size - 2] > arr[size - 1])
        return 0;    
    return sort(arr, size - 1);
}
int main()
{
    int n,arr[100];
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=sort(arr,n);
    if(result==0)
    printf("Not in Ascending order");
    else
    printf("Ascending order");
    return 0;
}
