#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            ans.push_back(x * x);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = s.sortedSquares(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}