#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkVowel(char ch) {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            char start = words[i].front();
            char end = words[i].back();
            if (checkVowel(start) && checkVowel(end)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"apple", "dog", "orange", "ice", "unit"};
    int left = 0, right = 4;

    cout << "Count of vowel strings: "
         << sol.vowelStrings(words, left, right) << endl;

    return 0;
}