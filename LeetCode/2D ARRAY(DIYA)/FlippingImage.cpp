#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    for (int i = 0; i < image.size(); i++) {
        int left = 0;
        int right = image[i].size() - 1;

        while (left <= right) {
            swap(image[i][left], image[i][right]);

            image[i][left] = 1 - image[i][left];
            image[i][right] = 1 - image[i][right];

            left++;
            right--;
        }
    }

    cout << "Flipped Image:" << endl;

    for (auto row : image) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}