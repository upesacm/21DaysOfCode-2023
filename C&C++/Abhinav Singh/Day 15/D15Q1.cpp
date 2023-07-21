#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error: File does not exist!" << endl;
        return 1;
    }

    cout << "File exists." << endl;

    return 0;
}