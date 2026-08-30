#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int j = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}