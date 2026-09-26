#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverse(s.begin(), s.end());

    cout << "Reversed String: ";
    for (char ch : s) {
        cout << ch;
    }

    return 0;
}