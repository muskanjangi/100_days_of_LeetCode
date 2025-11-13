#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int cnt = 0;
        int noOfB = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= day) {
                cnt++;
            } else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long val = m * 1ll * k;
        if(val > arr.size()) return -1;
        int minimum = INT_MAX, maximum = INT_MIN;
        for(int i = 0; i < arr.size(); i++) {
            minimum = min(minimum, arr[i]);
            maximum = max(maximum, arr[i]);
        }
        int low = minimum, high = maximum;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(possible(arr, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 10, 3, 10, 2};
    int m = 3, k = 1;
    cout << "Minimum days: " << sol.minDays(arr, m, k) << endl;
    return 0;
}