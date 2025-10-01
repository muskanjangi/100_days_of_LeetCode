#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        return x == reverse(x, 0LL);
    }

    long long reverse(int x, long long rev) {
        if (x == 0) return rev;
        return reverse(x / 10, rev * 10 + x % 10);
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}