#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for (int i = 0; i < nums.size(); i++) {
            XOR ^= nums[i];
        }
        return XOR;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single number is: " << sol.singleNumber(nums) << endl;
    return 0;
}