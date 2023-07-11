#include <stdio.h>
int main()
{
    int arr[1000];
    printf("Enter array size\n");
    int size,c=0;
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
      if(!(1&arr[i]))
      c++;
    }
    printf("Number of even numbers is %d",c);
    return 0;
}
