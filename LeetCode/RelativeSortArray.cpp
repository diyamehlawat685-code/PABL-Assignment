#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        for (int x : arr2) {
            for (int i = 0; i < arr1.size(); i++) {
                if (arr1[i] == x) {
                    ans.push_back(x);
                    arr1[i] = -1;
                }
            }
        }

        vector<int> remaining;

        for (int x : arr1) {
            if (x != -1) {
                remaining.push_back(x);
            }
        }

        sort(remaining.begin(), remaining.end());

        for (int x : remaining) {
            ans.push_back(x);
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> ans = s.relativeSortArray(arr1, arr2);

    for (int x : ans)
        cout << x << " ";

    return 0;
}