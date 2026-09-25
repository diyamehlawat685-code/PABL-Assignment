#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = mat.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];

        if (i != n - 1 - i) {
            sum += mat[i][n - 1 - i];
        }
    }

    cout << "Diagonal Sum: " << sum << endl;

    return 0;
}