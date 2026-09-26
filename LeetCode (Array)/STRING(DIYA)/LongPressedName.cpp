#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "alex";
    string typed = "aaleex";

    int i = 0;
    int j = 0;

    while (j < typed.length()) {
        if (i < name.length() && name[i] == typed[j]) {
            i++;
        }
        else if (j == 0 || typed[j] != typed[j - 1]) {
            cout << "Long Pressed: false";
            return 0;
        }

        j++;
    }

    cout << "Long Pressed: "
         << (i == name.length() ? "true" : "false");

    return 0;
}