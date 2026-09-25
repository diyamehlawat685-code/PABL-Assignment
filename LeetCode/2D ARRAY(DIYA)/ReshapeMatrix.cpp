#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };

    int rows = 1;
    int cols = 4;

    int oldRows = mat.size();
    int oldCols = mat[0].size();

    if (oldRows * oldCols != rows * cols) {
        cout << "Cannot reshape the matrix." << endl;
        return 0;
    }

    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < oldRows * oldCols; i++) {
        result[i / cols][i % cols] = mat[i / oldCols][i % oldCols];
    }

    cout << "Reshaped Matrix:" << endl;

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}