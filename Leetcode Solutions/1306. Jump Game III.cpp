class Solution {
public:
    vector<int> v;
    int l, dp[50005];
    
    void func(int idx)
    {
        if(idx < 0 || idx >= l) return;
        if(dp[idx] != -1) return;
        
        dp[idx] = 1;
        
        func(idx + v[idx]);
        func(idx - v[idx]);
    }
    
    bool canReach(vector<int>& arr, int start) {
        l = arr.size();
        v = arr;
        
        memset(dp, -1, sizeof(dp));
        
        func(start);
        
        for(int i = 0; i < l; i++){
            if(arr[i] == 0 && dp[i] != -1) return true;
        }
        
        return false;
    }
};