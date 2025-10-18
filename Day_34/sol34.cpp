#include <iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        for (int i = 0; i < n; ++i) {
            result ^= (start + 2 * i);
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n = 5;
    int start = 0;
    int output = sol.xorOperation(n, start);
    cout << "XOR result: " << output << endl;
    return 0;
}