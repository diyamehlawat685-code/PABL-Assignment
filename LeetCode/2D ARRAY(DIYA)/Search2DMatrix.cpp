#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;

    int rows = matrix.size();
    int cols = matrix[0].size();

    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] == target) {
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    cout << "Target Found: "
         << (found ? "true" : "false") << endl;

    return 0;
}