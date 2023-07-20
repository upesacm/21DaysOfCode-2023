

// 1. Write a program that reads a text file line by line and prints each line to the console.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string path = "GitBashIntro.txt";

    try
    {
        ifstream file;
        string read;
        file.open(path);
        if (!file)
        {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read, '.'))
        { // specify period as delimiter. Also, period will not get printed.
                    cout
                << read;
        }
        file.close();
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}