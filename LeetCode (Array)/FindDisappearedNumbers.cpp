#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 1; i <= nums.size(); i++) {
            bool found = false;

            for (int x : nums) {
                if (x == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = s.findDisappearedNumbers(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}