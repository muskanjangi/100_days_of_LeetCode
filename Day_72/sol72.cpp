#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            count[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";

    if (sol.isAnagram(s, t)) {
        cout << "True: '" << t << "' is an anagram of '" << s << "'" << endl;
    } else {
        cout << "False: '" << t << "' is not an anagram of '" << s << "'" << endl;
    }

    return 0;
}