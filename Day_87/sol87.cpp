#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for (int i = 0; i < words.size(); ++i) {
            if (words[i].find(x) != string::npos) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"abc", "bcd", "aaaa", "cbc"};
    char x = 'a';
    vector<int> indices = sol.findWordsContaining(words, x);

    cout << "Indices: ";
    for (int idx : indices) cout << idx << " ";
    cout << endl;

    return 0;
}