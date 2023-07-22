#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream inputFile("test.txt");

  if (inputFile.is_open()) {
    string line;
    int lineCount = 0;

    while (getline(inputFile, line)) {
      lineCount++;
    }

    inputFile.close();

    cout << "Number of lines in the file: " << lineCount <<endl;
  } else {
    cout << "Failed to open the file." <<endl;
  }

  return 0;
}
