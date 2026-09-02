#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;
            int temp = num;

            while (temp > 0) {
                digits++;
                temp = temp / 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution s;
    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << s.findNumbers(nums);

    return 0;
}