#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digits = log10(num) + 1;
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << "Count of even-digit numbers: " << sol.findNumbers(nums) << endl;
    return 0;
}