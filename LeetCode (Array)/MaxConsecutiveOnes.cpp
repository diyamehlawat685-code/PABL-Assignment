#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int x : nums) {
            if (x == 1) {
                count++;
            }
            else {
                count = 0;
            }

            if (count > maxCount) {
                maxCount = count;
            }
        }

        return maxCount;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << s.findMaxConsecutiveOnes(nums);

    return 0;
}