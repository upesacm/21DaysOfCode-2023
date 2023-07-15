#include <stdio.h>
#include <string.h>

int main()
{
    char colors[][10] = {"red", "green", "blue", "yellow", "black", "white"};
    char messages[][100] = {"You are going to meet your love", "Don't overlook the opportunity you are about to get",
                            "Be calm and relax", "Something good is going to happen", 
                            "You are going to meet a soul today", "You are going to experience new things"};
    
    int i, n = 6;
    char choice[100];
    
    printf("Enter your favorite color: ");
    scanf("%s", choice);
    
    for (i = 0; i < n; i++)
    {
        if (strcmp(choice, colors[i]) == 0)
        {
            printf("%s\n", messages[i]);
            break;
        }
    }
    
    return 0;
}
