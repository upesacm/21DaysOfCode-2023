#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    try {
        ifstream file(filename);
        if (!file) {
            throw runtime_error("File does not exist!");
        }

        // File exists, continue with your logic here...
        cout << "File exists!" << endl;

        file.close(); // Close the file when you're done with it
    } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1; // Exiting the program with an error status
    }

    return 0; // Exiting the program successfully
}
