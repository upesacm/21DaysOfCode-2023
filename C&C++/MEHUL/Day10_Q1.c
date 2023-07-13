#include<stdio.h>

int main()
{
    int i, j, r, s; 
    
    printf("Enter the range: ");
    scanf("%d", &r);
    
    int fibona[r];
    
    fibona[0] = 0;
    fibona[1] = 1;
    
    for(i=2; i<=r; i++)
    {
        s = fibona[i-2] + fibona[i-1];
        fibona[i] = s;
    }
    
    for(i=0; i<=r; i++)
    {
        printf("%d ", fibona[i]);
    }
}
