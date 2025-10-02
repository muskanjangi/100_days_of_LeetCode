#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int last = fib(n - 1);
        int slast = fib(n - 2);
        return last + slast;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << sol.fib(n) << endl;
    return 0;
}