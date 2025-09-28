#include <iostream>
#include <vector>
<<<<<<< HEAD
#include <climits>
=======
>>>>>>> 6a579dfa67cfedb09b051e6b4ad8f5fb7a8a7e1e
using namespace std;

class Solution {
public:
<<<<<<< HEAD
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
=======
    void moveZeroes(vector<int>& nums) {
        int j = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
>>>>>>> 6a579dfa67cfedb09b051e6b4ad8f5fb7a8a7e1e
    }
};

int main() {
    Solution sol;
<<<<<<< HEAD
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    int result = sol.maxSubArray(nums);
    cout << "Maximum Subarray Sum = " << result << endl;
=======
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
>>>>>>> 6a579dfa67cfedb09b051e6b4ad8f5fb7a8a7e1e
    return 0;
}