// 1. Write a program to swap the values of two variables using pointers.

// 2. Implement a function to concatenate two strings using pointers.

#include<iostream>
using namespace std;

void swapUsingPointers(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "Value of num1: " << *ptr1 << endl <<"Value of num2: " << *ptr2 << endl;
    cout << "********SWAPPING DONE*********"<<endl;
    

}

int main(){

    int num1 = 5;
    int num2 = 19;
    //pointers
    int *p1 = &num1;
    int *p2 = &num2;
    cout << "Value of num1: " << *p1 << endl <<"Value of num2: " << *p2 << endl;

    cout << "*****SWAPPING IN PROGRESS*****"<<endl;
    //swapping
    swapUsingPointers(p1,p2);
 }
