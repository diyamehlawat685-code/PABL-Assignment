#include <iostream>
#include <string>
using namespace std;

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";

    int position = haystack.find(needle);

    if (position == string::npos)
        position = -1;

    cout << "First Occurrence: " << position;

    return 0;
}