#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> img = {
        {100, 200, 100},
        {200, 50, 200},
        {100, 200, 100}
    };

    int rows = img.size();
    int cols = img[0].size();

    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int sum = 0;
            int count = 0;

            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {

                    if (x >= 0 && x < rows &&
                        y >= 0 && y < cols) {

                        sum += img[x][y];
                        count++;
                    }
                }
            }

            result[i][j] = sum / count;
        }
    }

    cout << "Smoothed Image:" << endl;

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}