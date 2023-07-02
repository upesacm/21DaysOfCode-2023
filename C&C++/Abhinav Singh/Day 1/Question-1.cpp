//Abhinav Singh
#include<iostream>
#include<string>
using namespace std;

void Greeting(string name){
    cout << "Hello " << name;
}

int main(){
    string name;
    cin >> name;
    Greeting(name);
    return 0;
}
