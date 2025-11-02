#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> lastIndex;
        vector<int> res;
        for (int i = 0; i < s.size(); ++i) {
            lastIndex[s[i]] = i;
        }
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); ++i) {
            end = max(end, lastIndex[s[i]]);
            if (i == end) {
                res.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    string input = "ababcbacadefegdehijhklij";
    vector<int> result = sol.partitionLabels(input);
    cout << "Partition sizes: ";
    for (int size : result) {
        cout << size << " ";
    }
    cout << endl;
    return 0;
}