class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0], maxProfit = 0;
        
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) 
                min = prices[i];

            if (prices[i]-min > maxProfit) 
                maxProfit = prices[i]-min;
        }
        return maxProfit;
        
    }
};