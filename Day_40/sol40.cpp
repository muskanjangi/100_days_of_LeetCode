#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    void recursePermutation(int ind, vector<int> &nums, vector<vector<int>> &ans) {
        if (ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);
            recursePermutation(ind + 1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        recursePermutation(0, nums, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.permute(nums);

    for (const auto &perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}