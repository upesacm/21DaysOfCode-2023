#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFileName = "source.txt";
    string destinationFileName = "destination.txt";

    ifstream sourceFile(sourceFileName);
    ofstream destinationFile(destinationFileName);

    if (sourceFile.is_open() && destinationFile.is_open()) {
        string line;
        while (getline(sourceFile, line)) {
            destinationFile << line << endl;
        }

        cout << "File copied successfully!" << endl;

        sourceFile.close();
        destinationFile.close();
    } else {
        cout << "Unable to open the files." << endl;
    }

    return 0;
}
