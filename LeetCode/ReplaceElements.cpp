#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];

            arr[i] = maxRight;

            if (temp > maxRight) {
                maxRight = temp;
            }
        }

        return arr;
    }
};

int main() {
    Solution s;
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    vector<int> ans = s.replaceElements(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}