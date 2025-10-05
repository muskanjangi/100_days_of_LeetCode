#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> uniqueElements;
        int n = digits.size();
        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) continue;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    if (digits[k] % 2 == 0) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        uniqueElements.insert(num);
                    }
                }
            }
        }
        return uniqueElements.size();
    }
};

int main() {
    Solution sol;
    vector<int> digits = {1, 2, 3, 4}; 
    cout << "Total valid numbers: " << sol.totalNumbers(digits) << endl;
    return 0;
}