#include <iostream>
#include <string>
#include <vector>

using namespace std;

void countVowels(string sentence, vector<vector<int>>& vowelCount) {
    for (char c : sentence) {
        if (c == 'A') {
            vowelCount[0][0]++;
        } else if (c == 'a') {
            vowelCount[0][1]++;
        } else if (c == 'E') {
            vowelCount[1][0]++;
        } else if (c == 'e') {
            vowelCount[1][1]++;
        } else if (c == 'I') {
            vowelCount[2][0]++;
            vowelCount[2][1]++;
        } else if (c == 'i') {
            vowelCount[3][0]++;
            vowelCount[3][1]++;
        } else if (c == 'O') {
            vowelCount[4][0]++;
            vowelCount[4][1]++;
        } else if (c == 'o') {
            vowelCount[5][0]++;
            vowelCount[5][1]++;
        } else if (c == 'U') {
            vowelCount[6][0]++;
            vowelCount[6][1]++;
        } else if (c == 'u') {
            vowelCount[7][0]++;
            vowelCount[7][1]++;
        }
    }
}

void displayVowelCounts(const vector<vector<int>>& vowelCount) {
    char vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int rowCount = vowelCount.size() / 2; 

    
    for (int i = 0; i < rowCount; i++) {
        cout << vowels[i * 2] << "-" << vowelCount[i * 2][0] << endl;
        cout << vowels[i * 2 + 1] << "-" << vowelCount[i * 2 + 1][0] << endl;
    }
}

int main() {
    string sentence;
    
    getline(cin, sentence);

    vector<vector<int>> vowelCount(10, vector<int>(2, 0));

    countVowels(sentence, vowelCount);
    displayVowelCounts(vowelCount);

    return 0;
}
