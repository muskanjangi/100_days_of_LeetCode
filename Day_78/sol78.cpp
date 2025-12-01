#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }
        int count = 0;
        while (end >= 0 && s[end] != ' ') {
            count++;
            end--;
        }
        return count;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Length of last word: " << sol.lengthOfLastWord(input) << endl;
    return 0;
}