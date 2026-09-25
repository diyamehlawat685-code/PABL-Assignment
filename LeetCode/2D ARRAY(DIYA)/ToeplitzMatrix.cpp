#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    bool isToeplitz = true;

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] != matrix[i - 1][j - 1]) {
                isToeplitz = false;
            }
        }
    }

    cout << "Toeplitz Matrix: "
         << (isToeplitz ? "true" : "false") << endl;

    return 0;
}