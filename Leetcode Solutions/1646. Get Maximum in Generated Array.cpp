class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> v(n+2);
        int mx = 1;
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        v[0] = 0;
        v[1] = 1;
        
        for(int i = 1; i <= n/2; i++){
            v[(i*2)] = v[i];
            v[(i*2)+1] = v[i] + v[i+1];
        }
        
        
        
        for(int i = 0; i <= n; i++) mx = max(mx, v[i]);
        
        return mx;
    }
};