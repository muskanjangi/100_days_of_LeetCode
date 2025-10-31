#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                result.push_back(index + 1);
            } else {
                nums[index] = -nums[index];
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = sol.findDuplicates(nums);
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}