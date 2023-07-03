#include <iostream>

using namespace std;

void sayHello(string str){

    cout<<"HELLO"<<" "<<str<<"!"<<endl;

}

int main(){

    string name;

    cout<<"Enter your name :"<<endl;

    cin>>name;

    sayHello(name);

    return 0;
}