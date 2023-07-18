#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
   string filename;
   cout << "Enter the filename: ";
   cin >> filename;

   try {
      ifstream file(filename);
      if (!file) {
         throw runtime_error("Error: File does not exist or cannot be opened.");
      }

      cout << "File exists and can be opened successfully.\n";
   }
   catch (const exception& e) {
      cerr << e.what() << "\n";
      return 1;
   }

   return 0;
}
