#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name\n");
    scanf("%[^\n]",name);
    printf("HELLO %s !",name);
    return 0;
}
