#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;

        vector<int> expected = heights;

        sort(expected.begin(), expected.end());

        for (int i = 0; i < expected.size(); i++) {
            if (expected[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution s;
    vector<int> heights = {1, 1, 4, 2, 1, 3};

    cout << s.heightChecker(heights);

    return 0;
}