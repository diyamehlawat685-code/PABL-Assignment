#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "00110011";

    int previous = 0;
    int current = 1;
    int answer = 0;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current++;
        }
        else {
            answer += min(previous, current);
            previous = current;
            current = 1;
        }
    }

    answer += min(previous, current);

    cout << "Binary Substrings: " << answer;

    return 0;
}