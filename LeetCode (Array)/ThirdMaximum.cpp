#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 3, 1};

    sort(nums.begin(), nums.end(), greater<int>());

    vector<int> uniqueNums;

    for (int i = 0; i < nums.size(); i++) {
        if (uniqueNums.empty() || nums[i] != uniqueNums.back()) {
            uniqueNums.push_back(nums[i]);
        }
    }

    if (uniqueNums.size() >= 3) {
        cout << "Third Maximum Number: " << uniqueNums[2];
    } else {
        cout << "Maximum Number: " << uniqueNums[0];
    }

    return 0;
}