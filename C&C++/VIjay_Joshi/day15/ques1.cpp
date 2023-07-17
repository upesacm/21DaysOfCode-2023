#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string File;
    cout << "Enter the filename: ";
    cin >> File;

    ifstream file(File);
    if (!file) {
        cout << "Error: File not exist." << endl;
        return 1;
    }
cout<<"NO Error Is there";
    return 0;
}
