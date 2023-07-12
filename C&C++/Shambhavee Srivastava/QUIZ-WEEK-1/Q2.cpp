#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s[] = { "Hello","World,", "I",
                   "am", "here"};
 
    string ans = "";
    for (int i = 4; i >= 0; i--) {
        ans += s[i] + " ";
    }
  
    cout << (ans.substr(0, ans.length() - 1)) << endl;
 
    return 0;
}