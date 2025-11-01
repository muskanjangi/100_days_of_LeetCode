#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunks = 0;
        int maxValue = 0;
        for (int i = 0; i < arr.size(); ++i) {
            maxValue = max(maxValue, arr[i]);
            if (maxValue == i) {
                chunks++;
            }
        }
        return chunks;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 0, 2, 3, 4};
    int result = sol.maxChunksToSorted(arr);
    cout << "Max chunks: " << result << endl;
    return 0;
}