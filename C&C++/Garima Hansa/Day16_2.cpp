// 2. Write a program that copies the contents of one file to another file.

#include <iostream>
#include <fstream>
using namespace std;

void readFile(string path)
{
        ifstream file;
        string read; // create string to store what is read into
        file.open(path);

        while (getline(file, read))
        {
            cout << read <<endl;
        }
        file.close();
        cerr << "File successfully opened and closed." << endl;
}


int main()
{
    string path1 = "GitBashIntro.txt";
    string path2 = "CopyGitBashIntro.txt";

    ifstream original_file;
    ofstream new_file;
    string read;
    string write;

    original_file.open(path1);
    new_file.open(path2, ios::app);

    if (!original_file.is_open() && !new_file.is_open())
    {
        cout << "Files failed to copy.";
    }

    while (getline(original_file, read, '.'))
    { // specify period as delimiter. Also, period will not get printed.
        write = read;
        new_file << write << endl;
    }
    original_file.close();
    new_file.close();

    cout << endl;

    readFile("CopyGitBashIntro.txt");
    return 0;

}
