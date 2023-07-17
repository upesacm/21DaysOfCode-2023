#include <stdio.h>
int main()
{
    printf("Enter number of terms\n");
    int n;
    scanf("%d",&n);
    int a=0,b=1,s;
    for(int i=0;i<=n;i++)
    {
    printf("%d ",a);
    s=a+b;
    a=b;
    b=s;
    }
    return 0;
}
