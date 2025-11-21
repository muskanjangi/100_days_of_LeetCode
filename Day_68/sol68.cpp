#include <bits/stdc++.h>
using namespace std;

int hidden = 6;
int guess(int num) {
    if (num == hidden) return 0;
    else if (num > hidden) return -1;
    else return 1;
}

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);
            if (res == 0) {
                return mid; 
            } else if (res < 0) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 10; 
    cout << "Hidden number is: " << sol.guessNumber(n) << endl;
    return 0;
}