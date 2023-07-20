#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("C:/Users/Charu Gupta/Desktop/21DaysOfCode-2023/C&C++/Charu/input.txt"); 
    
    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }
    
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    
    inputFile.close();
    
    return 0;
}