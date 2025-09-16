#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int Sum = 0;
        int Start = 0;
        int ansStart = -1;
        int ansEnd = -1;

        for (int i = 0; i < n; i++) {
            if (Sum == 0) Start = i;
            Sum = Sum + nums[i];
            if (Sum > maxi) {
                maxi = Sum;
                ansStart = Start;
                ansEnd = i;
            }
            if (Sum < 0) {
                Sum = 0;
            }
        }

      
        cout << "Maximum Subarray: ";
        for (int i = ansStart; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    int result = sol.maxSubArray(nums);
    cout << "Maximum Subarray Sum = " << result << endl;
    return 0;
}