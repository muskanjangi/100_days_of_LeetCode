#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int calculateTotalHours(vector<int>& piles, int hourly){
        int total = 0;
        for (int i = 0; i < piles.size(); i++){
            total += ceil((double)piles[i] / (double)hourly);
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1; 
        int high = *max_element(piles.begin(), piles.end());

        while (low < high){
            int mid = low + (high - low) / 2;
            if (calculateTotalHours(piles, mid) <= h){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution sol;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int result = sol.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;
    return 0;
}