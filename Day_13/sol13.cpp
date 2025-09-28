#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i1 = 0, i2 = 0;
        vector<int> result;
        
        while (i1 < nums1.size() && i2 < nums2.size()) {
            if (nums1[i1] < nums2[i2]) {
                i1++;
            } else if (nums2[i2] < nums1[i1]) {
                i2++;
            } else {
                if (result.empty() || result.back() != nums1[i1]) {
                    result.push_back(nums1[i1]);
                }
                i1++;
                i2++;
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    
    vector<int> output = sol.intersection(nums1, nums2);
    
    cout << "Intersection: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
