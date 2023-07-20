#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string filename = "myfile.txt";
  ifstream input_file(filename);
  if (!input_file.is_open()) {
    cout << "Error opening file." << endl;
    return 1;
  }

  string line;
  while (getline(input_file, line)) {
    cout << line << endl;
  }

  input_file.close();
  return 0;
}
