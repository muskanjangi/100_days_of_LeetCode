#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};

int main() {
    Solution sol;
    string input = "leetcode";
    int index = sol.firstUniqChar(input);
    cout << "First unique character index: " << index << endl;
    return 0;
}