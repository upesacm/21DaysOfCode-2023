#include <bits/stdc++.h>

using namespace std;

int countWords(string str)
{
  if (str.size() == 0) {
    return 0;
  }
  
  vector<string> words;
  string temp = "";
  int count =1;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
       count++;
      temp = "";
      while(str[i]==' '){
          i++;
      }
    }
    else {
      temp += str[i];
    }
  }
 
 
 
  return count;
}
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = countWords(sentence);
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
