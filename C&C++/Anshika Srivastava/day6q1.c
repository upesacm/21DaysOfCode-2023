#include <stdio.h>
#include<limits.h>
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
    int s= INT_MAX, ss=INT_MAX; //smallest & second smallest
    for (int i = 0; i < size; i++) {
        if (arr[i] < s) {
            ss = s;
            s = arr[i];
        } 
        else if (arr[i] < ss && arr[i] != s) 
            ss = arr[i];
    }
    printf("Second smallest element is %d",ss);
    return 0;
}
