#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];

        int index = 0;
        while (index < s1.size()) {
            if (s1[index] == s2[index]) {
                index++;
            } else {
                break;
            }
        }

        return index == 0 ? "" : s1.substr(0, index);
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};
    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}