#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0},
        {0, 0, 1},
        {0, 1, 0}
    };

    int rows = mat.size();
    int cols = mat[0].size();

    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (mat[i][j] != 1)
                continue;

            bool rowGood = true;
            bool colGood = true;

            for (int k = 0; k < cols; k++) {
                if (k != j && mat[i][k] == 1) {
                    rowGood = false;
                }
            }

            for (int k = 0; k < rows; k++) {
                if (k != i && mat[k][j] == 1) {
                    colGood = false;
                }
            }

            if (rowGood && colGood) {
                count++;
            }
        }
    }

    cout << "Special Positions: " << count << endl;

    return 0;
}