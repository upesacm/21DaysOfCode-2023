#include<stdio.h>

int check_sorted(int arr[], int n)
{
    
    if(n==0 || n==1)
    {
        return 1;
    }
    
    if(arr[n-1] < arr[n-2])
    {
        return 0;
    }
    
    return check_sorted(arr, n-1);
}

int main()
{
    int i, n, s;
    
    printf("Enter number of values: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter the values: ");
        scanf("%d", &arr[i]);
    }
    
    s = check_sorted(arr, n);
    
    if (s==1)
    {
        printf("The array is sorted");
    }
    else
    {
        printf("The array is not sorted");
    }
    
}
