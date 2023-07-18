#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int rows,columns;
    scanf("%d%d",&rows,&columns);
    int a[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max =a[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(a[i][j]!=0 && a[i][j]%max==0){
                sum+=a[i][j];
            }
        }
    }
    printf("Maximum Element: %d\n",max);
    printf("Sum of Divisible Elements: %d",sum);
    return 0;
}
