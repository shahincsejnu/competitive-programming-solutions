class Solution {
public:
    vector<int> v;
    int n, dp[30005];

    int func(int pos)
    {
        if(pos == n-1) return dp[pos] = 1;
        if(pos >= n) return 0;

        if(dp[pos] != -1) return dp[pos];

        for(int i = 1; i <= v[pos]; i++){
            if(func(pos+i)) return dp[pos] = 1;
        }

        return dp[pos] = 0;
    }

    bool canJump(vector<int>& nums) {
        n = nums.size();
        v = nums;
        memset(dp, -1, sizeof(dp));

        return func(0);
    }
};