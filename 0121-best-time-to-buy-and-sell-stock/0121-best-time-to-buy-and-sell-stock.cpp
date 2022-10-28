class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = 0, bestSell = 0, b = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            b = bestSell;
            bestSell = prices[i + 1] - prices[bestBuy];

            if (bestSell < 0) {
                bestBuy = i + 1;
            }
            bestSell = max(b, bestSell);
        }
        return bestSell;
    }
};