#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ab";
    string goal = "ba";

    int first = -1, second = -1;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != goal[i]) {
            count++;

            if (first == -1)
                first = i;
            else
                second = i;
        }
    }

    bool answer = false;

    if (count == 2) {
        answer = (s[first] == goal[second] &&
                  s[second] == goal[first]);
    }

    cout << "Buddy Strings: " << (answer ? "true" : "false");

    return 0;
}