#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void generate(int ind, vector<int>& nums, vector<int>& temp) {
    if (ind == nums.size()) {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    generate(ind + 1, nums, temp);
    temp.pop_back();
    generate(ind + 1, nums, temp);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> temp;
    generate(0, nums, temp);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    cout << "Subsets:\n";
    for (auto subset : result) {
        cout << "{ ";
        for (int num : subset) cout << num << " ";
        cout << "}\n";
    }
    return 0;
}