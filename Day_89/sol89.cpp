#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        while (true) {
            if (s.find("()") != string::npos) {
                s.erase(s.find("()"), 2);
            } else if (s.find("{}") != string::npos) {
                s.erase(s.find("{}"), 2);
            } else if (s.find("[]") != string::npos) {
                s.erase(s.find("[]"), 2);
            } else {
                return s.empty();
            }
        }
    }
};

int main() {
    Solution sol;
    string test1 = "()[]{}";
    string test2 = "([)]";
    string test3 = "{[]}";
    
    cout << test1 << " -> " << (sol.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << test2 << " -> " << (sol.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << test3 << " -> " << (sol.isValid(test3) ? "Valid" : "Invalid") << endl;

    return 0;
}