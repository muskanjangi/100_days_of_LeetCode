#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& numbers) {
        int result = numbers.size(); 
        for (int index = 0; index < numbers.size(); index++) {
            result ^= index ^ numbers[index]; 
        }
        return result;
    }
};

int main() {
    vector<int> input = {3, 0, 1}; 
    Solution solver;
    int missing = solver.missingNumber(input);
    cout << "Missing number is: " << missing << endl;
    return 0;
}
