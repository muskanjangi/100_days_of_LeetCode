#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int evensum = 0, oddsum = 0;
        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 0) {
                evensum += num[i] - '0';
            } else {
                oddsum += num[i] - '0';
            }
        }
        return evensum == oddsum;
    }
};

int main() {
    Solution sol;
    string num;

    cout << "Enter a number: ";
    cin >> num;

    if (sol.isBalanced(num)) {
        cout << "Balanced " << endl;
    } else {
        cout << "Not Balanced " << endl;
    }

    return 0;
}