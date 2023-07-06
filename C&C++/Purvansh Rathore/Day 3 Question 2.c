#include <stdio.h>
#include <math.h>
//DAY 3
//Ques 2

//Driver code
int main() {
    double num, res;

    // Get input from the user
    printf("Enter a num: ");
    scanf("%lf", &num);

    // Calculate the natural logarithm using log() function
    res = log(num);

    // Display the res
    printf("The natural logarithm of %.2lf is: %.2lf\n", num, res);

    return 0;
}

