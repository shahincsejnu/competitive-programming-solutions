class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+2, vector<int> (n+2, 0));
        
        for(int i = n; i >= 1; i--){
            for(int j = i+1; j <= n; j++){
                int val = 1e9;
                
                for(int k = i; k <= j; k++){
                    int res = k + max(dp[i][k-1], dp[k+1][j]);
                    val = min(val, res);
                }
                
                dp[i][j] = val;
            }
        }
        
        return dp[1][n];
    }
};