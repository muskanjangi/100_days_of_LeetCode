#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> dict(words.begin(), words.end());
        unordered_map<string, bool> visited;
        vector<string> result;
        for (auto &word : words) {
            if (isConcatenated(word, dict, visited)) {
                result.push_back(word);
            }
        }
        return result;
    }

private:
    bool isConcatenated(const string &word, unordered_set<string> &dict, unordered_map<string, bool> &visited) {
        if (visited.count(word)) return visited[word];
        int n = word.size();
        for (int i = 1; i < n; i++) {
            string prefix = word.substr(0, i);
            string suffix = word.substr(i);
            if (dict.count(prefix)) {
                if (dict.count(suffix) || isConcatenated(suffix, dict, visited)) {
                    visited[word] = true;
                    return true;
                }
            }
        }
        visited[word] = false;
        return false;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"cat","cats","dog","catsdog"};
    vector<string> result = sol.findAllConcatenatedWordsInADict(words);

    cout << "Concatenated words: ";
    for (auto &w : result) cout << w << " ";
    cout << endl;

    return 0;
}