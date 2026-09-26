#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> chars = {
        'a', 'a', 'b', 'b', 'c', 'c', 'c'
    };

    int index = 0;

    for (int i = 0; i < chars.size();) {
        char current = chars[i];
        int count = 0;

        while (i < chars.size() && chars[i] == current) {
            i++;
            count++;
        }

        chars[index++] = current;

        if (count > 1) {
            string number = to_string(count);

            for (char ch : number)
                chars[index++] = ch;
        }
    }

    cout << "Compressed String: ";

    for (int i = 0; i < index; i++)
        cout << chars[i];

    return 0;
}