int main()
{
        static int array[10][10];
        int i, j, m, n, even = 0, odd = 0;

        printf("Enter no. of rows: ");
        scanf("%d", &m);
        printf("Enter no. of cols: ");
        scanf("%d",&n);
        printf("Enter values to the matrix: ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array[i][j]);
                 if ((array[i][j] % 2) == 0)
                 {
                     ++even;
                 }
                 else
                     ++odd;
             }
        }
        printf("\nThe frequency of occurrence of odd number  = %d \n", odd);
    printf("\nThe frequency of occurrence of even number = %d\n", even);

    return 0;

}