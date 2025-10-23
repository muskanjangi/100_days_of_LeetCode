#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void recursePermutations(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, vector<int> &freq) {
        if(ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(freq[i] == 0) {
                freq[i] = 1;
                ds.push_back(nums[i]);
                recursePermutations(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0); 
        recursePermutations(ds, nums, ans, freq);
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