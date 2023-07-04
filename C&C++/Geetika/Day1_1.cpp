//Write a program that prompts the user to enter their name and prints "HELLO, <Name>!".
#include <stdio.h>

int main() {
	char name[10];
	printf("Enter your name: ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);
}
