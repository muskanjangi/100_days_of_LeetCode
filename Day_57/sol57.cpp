#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int firstTarget(vector<int> &nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                first = mid;
                high = mid - 1;
            }
        }
        return first;
    }

    int secondTarget(vector<int> &nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int second = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                second = mid;
                low = mid + 1;
            }
        }
        return second;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstTarget(nums, target);
        int second = secondTarget(nums, target);
        return {first, second};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);
    cout << "First and Last Position of " << target << ": ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}