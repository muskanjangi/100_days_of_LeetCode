#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {0}; 
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            count += freq[num]; 
            freq[num]++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int result = sol.numIdenticalPairs(nums);
    cout << "Number of good pairs: " << result << endl;
    return 0;
}