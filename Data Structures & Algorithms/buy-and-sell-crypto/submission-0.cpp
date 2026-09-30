class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i < prices.size();i++){
            int buy = prices[i];
            for(int k = i; k < prices.size();k++){
                if(prices[k] - buy > profit) profit = prices[k]-buy;
            }
        }
        return profit;
    }
};
