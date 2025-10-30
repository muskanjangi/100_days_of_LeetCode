#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0}; 
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for (int i = 0; i <= 100; i++) {
            if (freq[i] == 1) {
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 4};
    int result = sol.sumOfUnique(nums);
    cout << "Sum of unique elements: " << result << endl;
    return 0;
}