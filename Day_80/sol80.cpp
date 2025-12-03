#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;
        istringstream iss(s);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) return false;

        for (int i = 0; i < pattern.size(); ++i) {
            char ch = pattern[i];
            string w = words[i];

            if (p2w.count(ch)) {
                if (p2w[ch] != w) return false;
            } else {
                if (w2p.count(w)) return false;
                p2w[ch] = w;
                w2p[w] = ch;
            }
        }
        return true;
    }
};


int main() {
    Solution sol;
    string pattern = "abba";
    string s = "dog cat cat dog";

    cout << (sol.wordPattern(pattern, s) ? "true" : "false") << endl;

    
    pattern = "abba";
    s = "dog cat cat fish";
    cout << (sol.wordPattern(pattern, s) ? "true" : "false") << endl;

    return 0;
}