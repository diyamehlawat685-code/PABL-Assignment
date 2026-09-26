#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "egg";
    string t = "add";

    int map1[256] = {0};
    int map2[256] = {0};

    bool same = true;

    for (int i = 0; i < s.length(); i++) {
        if (map1[s[i]] != map2[t[i]]) {
            same = false;
            break;
        }

        map1[s[i]] = i + 1;
        map2[t[i]] = i + 1;
    }

    cout << "Isomorphic: " << (same ? "true" : "false");

    return 0;
}