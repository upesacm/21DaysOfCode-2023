
#include <stdio.h>
//DAY 2

//Second Question

void swap(int a, int b)
{
    a = a^b;
    b = a^b;
    a = a^b;

    printf("a is %d and b is %d", a, b);
}

//Driver code
int main()

{   
    int a = 20;
    int b = 30;
    swap(a, b);

    return 0;
}