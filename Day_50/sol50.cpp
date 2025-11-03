#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 1;
        int high = n - 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    int peak = sol.peakIndexInMountainArray(arr);
    cout << "Peak index: " << peak << endl;
    return 0;
}