class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        if(l == 0) return 0;
        
        int mx = prices[l-1], profit = 0;
        
        for(int i = l-2; i >= 0; i--){
            if(prices[i] >= mx) mx = prices[i];
            else{
                profit = max(profit, abs(mx-prices[i]));
            }
        }
        
        return profit;
    }
};