
#include<bits/stdc++.h>
using namespace std;

vector<string> reverseOrder(string sentenc){
    vector<string> ans;
    string Word = "";
    for (auto itr:sentenc) {
 
       
        if (itr == ' ') {
            ans.push_back(Word);
            Word = "";
        }
 
      
        else
            Word += itr;
    }
 
    ans.push_back(Word);
 
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    string s;
    getline(cin,s);
    
    vector<string> reverseString= reverseOrder(s);
    

    for (int i = reverseString.size() - 1; i >= 0; i--)
        cout << reverseString[i] << " ";
    return 0;
}
