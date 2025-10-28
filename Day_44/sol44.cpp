#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                if (nums[j] < nums[i])
                    count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result = sol.smallerNumbersThanCurrent(nums);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}