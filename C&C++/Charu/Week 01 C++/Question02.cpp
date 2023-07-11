#include <iostream>
#include <sstream>
#include <stack>

std::string reverseWords(const std::string& input) {
    std::stringstream ss(input);
    std::stack<std::string> words;
    std::string word;

    while (ss >> word) {
        words.push(word);
    }

    std::string reversed;

    while (!words.empty()) {
        reversed += words.top() + " ";
        words.pop();
    }

    if (!reversed.empty()) {
        reversed.pop_back();
    }

    return reversed;
}

int main() {
    std::string input;

    std::getline(std::cin, input);

    std::string reversed = reverseWords(input);

    std::cout <<reversed << std::endl;

    return 0;
}
