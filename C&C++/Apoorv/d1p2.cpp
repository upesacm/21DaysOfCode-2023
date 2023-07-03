#include<iostream>
using namespace std;

int main()
{
    int number , extractor = 0;

    cout<<"Please enter the number: ";
    cin>>number;
    while (number>9)
    {
        extractor+=number-((number/10)*10); 
        number/=10;     
    }
    extractor+=number;
    cout<<"Sum is: "<<extractor;
}

/*
    We took andantage of a fact that integere in cpp will never 
    yield float value , it will always show the floor value.
*/
