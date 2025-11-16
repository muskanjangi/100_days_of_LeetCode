#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - (mid + 1);
            if (missing < k)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high + 1 + k;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "Kth missing positive number is: " << sol.findKthPositive(arr, k) << endl;
    return 0;
}