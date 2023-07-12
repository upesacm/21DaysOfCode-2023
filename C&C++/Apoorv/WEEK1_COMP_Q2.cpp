#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int point_of_space = s.size();
    int occur_count = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (isspace(s[i]) && occur_count == 0)
        {
            occur_count++;

            for (int j = i + 1; j < point_of_space; j++)
            {
                cout << s[j];
            }
            cout << " ";
            point_of_space = i;
        }
        else if (isspace(s[i]) && occur_count > 0)
        {
            for (int j = i + 1; j < point_of_space; j++)
            {
                cout << s[j];
            }
            cout << " ";
            point_of_space = i;
        }
        else if (i == 0)
        {
            for (int j = i; j < point_of_space; j++)
            {
                cout << s[j];
            }
            cout << " ";
        }
    }

    return 0;
}
