#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split_sentence(string sentence) {
  vector<string> words;
  string word;
  for (char c : sentence) {
    if (c == ' ') {
      words.push_back(word);
      word = "";
    } else {
      word += c;
    }
  }
  if (word != "") {
    words.push_back(word);
  }
  return words;
}

int main() {
  string sentence = "This is a sentence.";
  vector<string> words = split_sentence(sentence);
  int n = words.size();
  cout << "The sentence contains " << n << " words." << endl;
  for (string word : words) {
    cout << word << " ";
  }
  cout << endl;
  return 0;
}
