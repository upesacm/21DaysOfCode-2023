#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int side1, side2 , side3 ;
    cout<<"Enter the length of 3 sides: ";
    cin>>side1>>side2>>side3;
    
    if (side1<=0 || side2<=0 || side3<=0)       // Checks for valid side values and proceed
    {
        cout<<"Invalid Input for sides.";
    }
    else
    {
        if(2*side1==side2+side3)       // only one case possible that is 
        {                              // It is a equilateral triangle
            cout<<"Equilateral Triangle";
        }
        else if (side1 != side2 && side1!= side3 ) // 2 cases possible (in worst case) can be scalene or isosceles
        {                                          
            if (side2 == side1 || side2==side3)    // if at least one side is equal its isosceles 
            {
                cout<<"Isosceles Triangle";
            }
            else                                   // Else it is a scalene triangle
            {
                cout<<"Scalene Triangle";
            }
        }
        else
        {
            cout<<"Isosceles triangle";            
        }
    }
    return 0 ; 
    
}
