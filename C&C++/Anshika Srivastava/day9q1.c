#include <stdio.h>
double average(int arr[],int size)
{
 double sum=0,avg;
 for(int i=0;i<size;i++)  
 {
  sum=sum+arr[i];  
 }
 avg=sum/size;
 return avg;
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
    double avg=average(arr,size);
    printf("Average is %f",avg);
    return 0;
}
