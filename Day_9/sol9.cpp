
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestBuyPrice = INT_MAX;
        int highestProfit = 0;

        for (int currentPrice : prices) {
            lowestBuyPrice = min(lowestBuyPrice, currentPrice);
            highestProfit = max(highestProfit, currentPrice - lowestBuyPrice);
        }

        return highestProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = sol.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}
