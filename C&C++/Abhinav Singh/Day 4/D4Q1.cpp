//Write a program to determine the type of a triangle based on the lengths of its sides and print the result (e.g., equilateral, isosceles, scalene). Take the input of the length of sides from the User.

#include<iostream>
using namespace std;

void CheckTri(int a,int b,int c){
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid side lengths. Lengths must be positive.\n";
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        cout <<"The given side lengths do not form a triangle.\n";
    }
    else if(a == b && b == c){
        cout << "Enter Traingle is Equilateral.";
    }
    else if(a == b || a == c || b == c){
        cout << "Enter Triangle is Isosceles.";
    }
    else{
        cout << "Enter Traingle is Scalene.";
    }
}

int main(){
    int side1,side2,side3;
    
    cout << "Enter The First side : ";
    cin >> side1;

    cout << "Enter The Second side : ";
    cin >> side2;

    cout << "Enter The Third side : ";
    cin >> side3;

    CheckTri(side1,side2,side3);
    // CheckTri(3,1,2);
}