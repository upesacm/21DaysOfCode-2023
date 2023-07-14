#include <stdio.h>
#include <stdlib.h>
int* fibonacci(int n)
{
    int* fibarray = (int*)malloc(n * sizeof(int));
    if (n <= 0)
        return NULL;
    if (n == 1)
    {
        fibarray[0] = 0;
        return fibarray;
    }
    fibarray = fibonacci(n - 1);
    fibarray[n - 1] = (n == 2) ? 1 : fibarray[n - 2] + fibarray[n - 3];
    return fibarray;
}
int main()
{
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    int* fibarray = fibonacci(n);
    printf("Fibonacci Sequence: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibarray[i]);
    }
    free(fibarray);
    return 0;  }
