#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the coefficients a,b,c" <<endl;
    cin>>a>>b>>c;
    double discriminant, root1, root2, real, imaginary;
    discriminant=((b*b)-(4*a*c));
    if (discriminant > 0)
     {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<"Root 1: "<<root1<<" and Root 2: "<<root2<<endl;
     }
     else if(discriminant==0)
     {
        root1=root2=-b/(2*a);
        cout<<"Root 1: "<<root1<<" and Root 2: "<<root2<<endl;
     }
     else
     {
         real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout<<"Root 1: "<<root1<<" and Root 2: "<<root2<<endl;
     }
     return 0;
}
