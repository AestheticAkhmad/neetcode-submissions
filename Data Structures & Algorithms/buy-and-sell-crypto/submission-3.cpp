class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left{}, right{1}, mostProfit{};

        while (right < prices.size()) {
            if (prices[right] > prices[left]) {
                mostProfit = max(mostProfit, prices[right] - prices[left]);
            } else {
                left = right;
            }
            ++right;
        }

        return mostProfit;
    }
};
