
#include <stdio.h>
//DAY 1

//Second Question

int calculateDigitSum(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main()

{   
    //Driver code For 2nd Ques
    int number;
    printf("Enter a three-digit number: \n");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        int sum = calculateDigitSum(number);
        printf("Sum of the digits: %d\n", sum);
    } else {
        printf("Invalid input. Please enter a three-digit number.\n");
    }

    
    return 0;
}