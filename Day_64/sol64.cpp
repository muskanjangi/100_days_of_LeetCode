#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            students = 1;
            if (countStudents(nums, mid) <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

private:
    int students = 1;
    int countStudents(vector<int>& arr, int pages) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (pages < arr[i]) return INT_MAX;
            if (count + arr[i] <= pages) {
                count += arr[i];
            } else {
                students += 1;
                count = arr[i];
            }
        }
        return students;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;
    cout << "Minimum largest sum: " << sol.splitArray(nums, k) << endl;
    return 0;
}