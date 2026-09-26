#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

int main() {
    string sentence = "I speak Goat Latin";
    stringstream ss(sentence);

    string word;
    string answer;
    int count = 1;

    while (ss >> word) {
        if (!isVowel(word[0])) {
            char first = word[0];
            word.erase(0, 1);
            word += first;
        }

        word += "ma";

        for (int i = 0; i < count; i++)
            word += "a";

        if (!answer.empty())
            answer += " ";

        answer += word;
        count++;
    }

    cout << "Goat Latin: " << answer;

    return 0;
}