#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[200];
    fgets(a,200,stdin);
    a[strcspn(a, "\n")] = '\0';
    int arr[10]; 
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    int count=0;
    for (count = 0; a[count] != '\0'; ++count);
    for(int i=0;i<count;i++){
        switch(a[i]){
            case 'A':
                arr[0]++;
                break;
            case 'a':
                arr[1]++;
                break;
            case 'E':
                arr[2]++;
                break;
            case 'e':
                arr[3]++;
                break;
            case 'I':
                arr[4]++;
                break;
            case 'i':
                arr[5]++;
                break;
            case 'O':
                arr[6]++;
                break;
            case 'o':
                arr[7]++;
                break;
            case 'U':
                arr[8]++;
                break;
            case 'u':
                arr[9]++;
                break;
        }
        
    }
    printf("Count\n");
    printf("A-%d\na-%d\n", arr[0],arr[1]);
    printf("E-%d\ne-%d\n", arr[2],arr[3]);
    printf("I-%d\ni-%d\n", arr[4],arr[5]);
    printf("O-%d\no-%d\n", arr[6],arr[7]);
    printf("U-%d\nu-%d\n", arr[8],arr[9]);

    return 0;
}
