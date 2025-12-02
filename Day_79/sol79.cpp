#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq(26, 0); 
        for (int i = 0; i < word1.size(); ++i) {
            freq[word1[i] - 'a']++;
            freq[word2[i] - 'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (abs(freq[i]) > 3) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string word1 = "abcde";
    string word2 = "bbcde";
    cout << (sol.checkAlmostEquivalent(word1, word2) ? "True" : "False") << endl;
    return 0;
}