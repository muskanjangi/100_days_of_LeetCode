#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int requiredDays = 1;
        int currentLoad = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (currentLoad + weights[i] > capacity) {
                requiredDays++;
                currentLoad = 0;
            }
            currentLoad += weights[i];
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = weights[0];
        for (int i = 1; i < weights.size(); i++) {
            if (weights[i] > left) {
                left = weights[i];
            }
        }

        int right = 0;
        for (int i = 0; i < weights.size(); i++) {
            right += weights[i];
        }

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, days, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main() {
    Solution sol;
    vector<int> weights = {1, 2, 3, 1, 1};
    int days = 4;
    cout << "Minimum capacity to ship within " << days << " days: " << sol.shipWithinDays(weights, days) << endl;
    return 0;
}