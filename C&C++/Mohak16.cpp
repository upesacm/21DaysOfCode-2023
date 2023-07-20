//                                                             {Day-16 Programs}
//Q-1 = Write a program that reads a text file line by line and prints each line to the console.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string filename;
    cout << "Enter the name of the text file : ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cout << "Error opening file.\n";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
return 0;
}
//Q-2 = Write a program that copies the contents of one file to another file.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string sourceFilename, destinationFilename;

    cout << "Enter the source file name : ";
    cin >> sourceFilename;

    cout << "Enter the destination file name : ";
    cin >> destinationFilename;

    ifstream sourceFile(sourceFilename);
    ofstream destinationFile(destinationFilename);

    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }

    cout << "File copied successfully!\n";
return 0;
}

