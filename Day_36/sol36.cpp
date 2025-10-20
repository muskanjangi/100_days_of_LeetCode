#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m - 1;
        int right = 0;
        while (left >= 0 && right < n) {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--;
                right++;
            } else {
                break;
            }
        }
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}