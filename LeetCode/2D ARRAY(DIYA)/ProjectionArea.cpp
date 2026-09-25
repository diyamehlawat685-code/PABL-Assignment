#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1, 2},
        {3, 4}
    };

    int rows = grid.size();
    int cols = grid[0].size();

    int area = 0;

    for (int i = 0; i < rows; i++) {
        int rowMax = 0;

        for (int j = 0; j < cols; j++) {
            if (grid[i][j] > 0)
                area++;

            rowMax = max(rowMax, grid[i][j]);
        }

        area += rowMax;
    }

    for (int j = 0; j < cols; j++) {
        int colMax = 0;

        for (int i = 0; i < rows; i++) {
            colMax = max(colMax, grid[i][j]);
        }

        area += colMax;
    }

    cout << "Projection Area: " << area << endl;

    return 0;
}