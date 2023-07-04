
#include <stdio.h>
//DAY 1

//First Question

void printName(char name[])
{
    printf("HELLO, <%s>! \n", name);
}

int main()

{   //Driver code for 1st Ques
    char name[25];
    printf("Enter your name: \n");
    scanf("%[^\n]s", name);
    printName(name);

    
    return 0;
}