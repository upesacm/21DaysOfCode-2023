#TASK1
#include<stdio.h>
int main() {
    int i,n;
    int t1=0;
    int t2=1;
    int nextterm=t1+t2;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("Fibonacci series:%d %d",t1,t2);
    for(i=3;i<=n;i++) {
        printf("%d", nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;


    }
    return 0;

}
#TASK2
#include<stdio.h>
int main() {
    int n1 , n2, max;
    printf("enter the values");
    scanf("%d %d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while(1) {
         if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
    }
    ++max;
    }
    return 0;
}
