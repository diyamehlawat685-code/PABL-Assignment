#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {

            if (nums[i] % 2 == 0) {
                i++;
            }
            else if (nums[j] % 2 == 1) {
                j--;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
};

int main() {
    Solution s;

    vector<int> nums = {3, 1, 2, 4};

    vector<int> ans = s.sortArrayByParity(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}