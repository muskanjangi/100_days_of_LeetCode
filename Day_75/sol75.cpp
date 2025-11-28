#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (!isalpha(s[start])) {
                start++;
            } else if (!isalpha(s[end])) {
                end--;
            } else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input = "a-bC-dEf-ghIj";
    string output = sol.reverseOnlyLetters(input);
    cout << "Reversed letters: " << output << endl;
    return 0;
}