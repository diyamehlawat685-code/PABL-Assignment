#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word = "USA";

    int capitalCount = 0;

    for (char ch : word) {
        if (isupper(ch))
            capitalCount++;
    }

    bool answer = false;

    if (capitalCount == 0 || capitalCount == word.length())
        answer = true;
    else if (capitalCount == 1 && isupper(word[0]))
        answer = true;

    cout << "Correct Capitalization: "
         << (answer ? "true" : "false");

    return 0;
}