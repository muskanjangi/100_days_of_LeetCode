#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        result.reserve(word1.size() + word2.size());
        int i = 0, j = 0;
        bool turn = true;
        while (i < word1.size() || j < word2.size()) {
            if (turn && i < word1.size()) {
                result.push_back(word1[i++]);
            } else if (!turn && j < word2.size()) {
                result.push_back(word2[j++]);
            }
            turn = !turn;
        }
        return result;
    }
};

int main() {
    Solution sol;
    string word1 = "abc";
    string word2 = "pqrstu";
    cout << sol.mergeAlternately(word1, word2) << endl;
    return 0;
}