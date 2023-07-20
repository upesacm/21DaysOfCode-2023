#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
  ifstream infile("input.txt");
  ofstream outfile("output.txt");
  string line;
  while (getline(infile, line)) {
    outfile << line << endl;
  }
  // Close the files.
  infile.close();
  outfile.close();
  return 0;
}