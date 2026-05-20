class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mostProfit{};

        for (int i = 0; i < prices.size(); ++i) {
            for (int j = i + 1; j < prices.size(); ++j) {
                if (prices[j] < prices[i]) {
                    i = j - 1;
                    break;
                } else {
                    mostProfit = max(mostProfit, prices[j] - prices[i]);
                }
            }
        }

        return mostProfit;
    }
};
