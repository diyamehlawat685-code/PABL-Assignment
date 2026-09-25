#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> lucky;

    for (int i = 0; i < rows; i++) {
        int rowMin = *min_element(matrix[i].begin(), matrix[i].end());

        for (int j = 0; j < cols; j++) {
            bool largestInColumn = true;

            for (int k = 0; k < rows; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    largestInColumn = false;
                    break;
                }
            }

            if (matrix[i][j] == rowMin && largestInColumn) {
                lucky.push_back(matrix[i][j]);
            }
        }
    }

    cout << "Lucky Numbers: ";

    for (int x : lucky) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}