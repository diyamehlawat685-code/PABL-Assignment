#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    cout << "Spiral Order: ";

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            cout << matrix[top][j] << " ";

        top++;

        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";

        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                cout << matrix[bottom][j] << " ";

            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";

            left++;
        }
    }

    cout << endl;

    return 0;
}