#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // correct answer
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {}; 
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(numbers, target);

    cout << "Indices: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
