#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "Let's take LeetCode contest";

    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }

    cout << "Reversed Words: " << s;

    return 0;
}