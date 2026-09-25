#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int k = 1;

    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int position = i * cols + j;
            int newPosition = (position + k) % (rows * cols);

            result[newPosition / cols][newPosition % cols] =
                grid[i][j];
        }
    }

    cout << "Shifted Grid:" << endl;

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}