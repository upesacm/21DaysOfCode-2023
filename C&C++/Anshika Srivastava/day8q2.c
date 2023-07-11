#include <stdio.h>
int main()
{
    int arr[10][10];
    printf("Enter array size\n");
    int m,n,sum=0;
    scanf("%d %d",&m,&n);
    printf("Enter array elements\n");
    for(int i=0;i<m;i++)
    {
      for (int j = 0; j < n; ++j) 
            {
            scanf("%d", &arr[i][j]);
            }
        }
     for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                sum = sum + arr[i][j] ;
            }
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
        }
        sum = 0;
        for (int j = 0; j < n; ++j) 
        {
            for (int i = 0; i < m; ++i)
            {
                sum = sum + arr[i][j];
            }
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
        }
    return 0; }
