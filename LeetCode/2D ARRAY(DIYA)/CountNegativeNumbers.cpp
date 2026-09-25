#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int count = 0;

    for (auto row : grid) {
        for (int x : row) {
            if (x < 0) {
                count++;
            }
        }
    }

    cout << "Negative Numbers: " << count << endl;

    return 0;
}