// ques 1: Write a program to determine the type of a triangle based on the lengths of its sides and print the result (e.g., equilateral, isosceles, scalene). Take the input of the length of sides from the User.
#include <iostream>
using namespace std;
void type_of_triangle(int a, int b, int c)
{
    if ((a==b)&&(b==c)&&(c==a))
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if ((a!=b)&&(b!=c)&&(c!=a))
    {
        cout<<"Scalene Triangle"<<endl;
    }
    else
    {
        cout<<"Isoceles Triangle"<<endl;
    }
}
int main() 
{
    int a;
    cout<<"Enter side1:"<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter side2:"<<endl;
    cin>>b;
    
    int c;
    cout<<"Enter side3:"<<endl;
    cin>>c;
    
    type_of_triangle(a, b, c);
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// ques 2: Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the user. Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.
#include <iostream>
#include <cmath>
using namespace std;
void calculateRoots(double a, double b, double c) 
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } 
    else if (discriminant == 0) 
    {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "Root 1: " << root << endl;
        cout << "Root 2: " << root << endl;
    } 
    else 
    {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter the coefficients (a, b, c): ";
    cin >> a >> b >> c;

    calculateRoots(a, b, c);

    return 0;
}
