#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    int **m1 = (int **)malloc(r1 * sizeof(int *));
    for (i=0; i<r1; i++) 
    {
        m1[i] = (int *)malloc(c1 * sizeof(int *));
    }
    
    int **m2 = (int **)malloc(r2 * sizeof(int *));
    for (i=0; i<r2; i++) 
    {
        m2[i] = (int *)malloc(c2 * sizeof(int *));
    }

    printf("Enter the value for first matrix=>\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &m1[i][j]);
        }
    }
    
    printf("Enter the value for second matrix=>\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &m2[i][j]);
        }
    }
    
    int **result = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }
    
    for (i=0; i<r1; i++) {
        for (j=0; j<c2; j++) {
            result[i][j] = 0;
            for (k=0; k<c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    printf("First Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    
    printf("Second Matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix Multiplication\n");
    for (i=0; i<r1; i++) {
        for (j=0; j<c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
