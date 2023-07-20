#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("C:/Users/Charu Gupta/Desktop/21DaysOfCode-2023/C&C++/Charu/input.txt"); 
    ofstream outputFile("C:/Users/Charu Gupta/Desktop/21DaysOfCode-2023/C&C++/Charu/output.txt"); 
    
    if (!inputFile) {
        cout << "Error opening the input file." << endl;
        return 1;
    }
    
    if (!outputFile) {
        cout << "Error opening the output file." << endl;
        return 1;
    }
    
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }
    
    inputFile.close();
    outputFile.close();
    
    cout << "File copied successfully." << endl;
    
    return 0;
}
