class Solution {
public:
    int dp[1005], n;
    vector<int> v;

    int func(int pos)
    {
        if(pos >= n) return 0;

        if(dp[pos] != -1) return dp[pos];

        return dp[pos] = min(func(pos+1), func(pos+2)) + v[pos];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        v = cost;

        memset(dp, -1, sizeof(dp));

        return min(func(0), func(1));
    }
};