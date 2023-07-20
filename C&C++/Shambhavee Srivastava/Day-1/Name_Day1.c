#include <stdio.h>

int main(){
    char name[20];
    printf("Hey there, enter your name: ");
    scanf("%s" , &name);
    printf("Hello, %s!", name);
}