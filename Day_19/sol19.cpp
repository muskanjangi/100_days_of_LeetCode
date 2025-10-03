#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        f(s, 0, s.size() - 1);
    }

    void f(vector<char>& s, int left, int right) {
        if (left >= right) return;
        swap(s[left], s[right]);
        f(s, left + 1, right - 1);
    }
};

int main() {
    Solution sol;
    vector<char> s = {'M', 'u', 's', 'k', 'a', 'n'};
    sol.reverseString(s);

    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}