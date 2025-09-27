#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int L = 0, R = n - 1;
        int pos = n - 1;  
        
        while (L <= R) {
            int leftSquare = nums[L] * nums[L];
            int rightSquare = nums[R] * nums[R];
            
            if (leftSquare > rightSquare) {
                result[pos] = leftSquare;
                L++;
            } else {
                result[pos] = rightSquare;
                R--;
            }
            pos--;
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-7, -3, 2, 3, 11};
    vector<int> result = sol.sortedSquares(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}