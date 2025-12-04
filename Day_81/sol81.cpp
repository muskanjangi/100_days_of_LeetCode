#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) {  
            return false;
        }
        while (n != 1) {
            if (n % 2 != 0) {
                return false;
            } else {
                n = n / 2;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    int test1 = 16;
    int test2 = 18;
    int test3 = -2;

    cout << test1 << " -> " << (sol.isPowerOfTwo(test1) ? "true" : "false") << endl;
    cout << test2 << " -> " << (sol.isPowerOfTwo(test2) ? "true" : "false") << endl;
    cout << test3 << " -> " << (sol.isPowerOfTwo(test3) ? "true" : "false") << endl;

    return 0;
}