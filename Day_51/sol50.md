#include <iostream>
using namespace std;

// Mock API for testing
bool isBadVersion(int version) {
    // Let's say version 4 is the first bad one
    return version >= 4;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int result = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isBadVersion(mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    int n = 5;
    cout << "First bad version: " << sol.firstBadVersion(n) << endl;
    return 0;
}