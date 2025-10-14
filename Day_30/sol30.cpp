#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int count = 0, prefixSum = 0;
        for (int num : nums) {
            prefixSum += num;
            count += prefixSumCount[prefixSum - k];
            prefixSumCount[prefixSum]++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, -2, 5};  
    int k = 5;
    cout << "Number of subarrays with sum " << k << " is: " << sol.subarraySum(nums, k) << endl;
    return 0;
}