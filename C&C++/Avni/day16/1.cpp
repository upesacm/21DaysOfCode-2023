#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
  // Open the file for reading.
  ifstream infile("file.txt");
  // Read each line of the file.
  string line;
  while (getline(infile, line)) 
  {
    cout << line << endl;
  }
  infile.close();
  return 0;
}