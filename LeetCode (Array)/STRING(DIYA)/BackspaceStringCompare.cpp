#include <iostream>
#include <string>
using namespace std;

string buildString(string s) {
    string result;

    for (char ch : s) {
        if (ch == '#') {
            if (!result.empty())
                result.pop_back();
        }
        else {
            result += ch;
        }
    }

    return result;
}

int main() {
    string s = "ab#c";
    string t = "ad#c";

    string first = buildString(s);
    string second = buildString(t);

    cout << "Strings Equal: "
         << (first == second ? "true" : "false");

    return 0;
}