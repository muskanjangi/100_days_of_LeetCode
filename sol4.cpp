#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n - 1]; 
                n--; 
            } else {
                i++;
            }
        }
        return n;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3, 4, 3, 5}; 
    int val = 3; 

    int newLength = sol.removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
