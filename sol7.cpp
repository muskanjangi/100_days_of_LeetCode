#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long L = 0, R = (long long)sqrt(c);
        while (L <= R) {
            long long sum = L * L + R * R;
            if (sum == c) return true;
            else if (sum < c) L++;
            else R--;
        }
        return false;
    }
};

int main() {
    Solution sol;
    int c;
    cout << "Enter a number: ";
    cin >> c;
    cout << (sol.judgeSquareSum(c) ? "True" : "False") << endl;
    return 0;
}