#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hm{
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int n = s.size();
        int result = hm[s[n - 1]];
        for (int i = n - 2; i >= 0; --i) {
            if (hm[s[i]] < hm[s[i + 1]]) {
                result -= hm[s[i]];
            } else {
                result += hm[s[i]];
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    string roman = "MCMXCIV"; 
    cout << "Integer value: " << sol.romanToInt(roman) << endl;
    return 0;
}