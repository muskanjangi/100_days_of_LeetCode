#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (m1[c1] != m2[c2])
                return false;

            m1[c1] = i + 1;
            m2[c2] = i + 1;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "egg";
    string t = "add";
    cout << (sol.isIsomorphic(s, t) ? "True" : "False") << endl;
    return 0;
}