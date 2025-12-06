#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0) {
            return true;
        }
        int i = 0;
        int j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        return i == s.length();
    }
};

int main() {
    Solution sol;
    string s = "abc";
    string t = "ahbgdc";

    if (sol.isSubsequence(s, t)) {
        cout << "Yes, \"" << s << "\" is a subsequence of \"" << t << "\"\n";
    } else {
        cout << "No, \"" << s << "\" is not a subsequence of \"" << t << "\"\n";
    }

    return 0;
}