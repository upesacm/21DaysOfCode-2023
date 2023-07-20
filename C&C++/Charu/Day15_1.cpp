#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string filename;

    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cout << "Error: File '" << filename << "' does not exist." << endl;
        return 1;
    }

    cout << "File '" << filename << "' exists." << endl;

    return 0;
}
