#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {

            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {

                flowerbed[i] = 1;
                n--;
            }
        }

        return n <= 0;
    }
};

int main() {
    Solution s;
    vector<int> flowerbed = {1, 0, 0, 0, 1};

    cout << boolalpha << s.canPlaceFlowers(flowerbed, 1);

    return 0;
}