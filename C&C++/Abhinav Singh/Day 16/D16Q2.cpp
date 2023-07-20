#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string source_filename = "myfile.txt";
  string destination_filename = "mycopy.txt";

  ifstream input_file(source_filename);
  ofstream output_file(destination_filename);

  if (!input_file.is_open()) {
    cout << "Error opening source file." << endl;
    return 1;
  }

  if (!output_file.is_open()) {
    cout << "Error opening destination file." << endl;
    return 1;
  }

  string line;
  while (getline(input_file, line)) {
    output_file << line << endl;
  }

  input_file.close();
  output_file.close();
  return 0;
}
