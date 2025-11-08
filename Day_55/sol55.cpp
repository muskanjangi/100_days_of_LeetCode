#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 1;   // if low = 0, risk when dividing x / 0
        int high = x;

        if (x == 0 || x == 1) {
            return x;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid > x / mid) {
                high = mid - 1;
            } else if (mid < x / mid) {
                low = mid + 1;
            } else {
                return mid;
            }
        }

        return high; // if x is 10, then return high
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Integer square root of " << x << " is: " << sol.mySqrt(x) << endl;
    return 0;
}