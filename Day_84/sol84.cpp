#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.size();
        int m = searchWord.size();
        int wordIndex = 1;
        int i = 0;

        while (i < n) {
            int j = i;
            int k = 0;

            while (j < n && sentence[j] != ' ' && k < m && sentence[j] == searchWord[k]) {
                ++j;
                ++k;
            }

            if (k == m) return wordIndex;

            while (j < n && sentence[j] != ' ') ++j;

            ++wordIndex;
            i = j + 1;
        }

        return -1;
    }
};

int main() {
    Solution sol;

    string sentence1 = "i love eating burger";
    string searchWord1 = "burg";
    cout << sol.isPrefixOfWord(sentence1, searchWord1) << endl;

    string sentence2 = "this problem is an easy problem";
    string searchWord2 = "pro";
    cout << sol.isPrefixOfWord(sentence2, searchWord2) << endl;

    string sentence3 = "hello world";
    string searchWord3 = "world";
    cout << sol.isPrefixOfWord(sentence3, searchWord3) << endl;

    return 0;
}