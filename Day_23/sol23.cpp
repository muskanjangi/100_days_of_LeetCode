#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        if(ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n - 1; i > ind; i--) {
            if(nums[ind] < nums[i]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}