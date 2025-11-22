#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 1; i < n - 1;) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int count = 1;
                int j = i;

                while (j > 0 && arr[j] > arr[j - 1]) {
                    j--;
                    count++;
                }

                while (i < n - 1 && arr[i] > arr[i + 1]) {
                    i++;
                    count++;
                }

                ans = max(ans, count);
            } else {
                i++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 1, 4, 7, 3, 2, 5};
    cout << "Longest mountain length: " << sol.longestMountain(arr) << endl;
    return 0;
}