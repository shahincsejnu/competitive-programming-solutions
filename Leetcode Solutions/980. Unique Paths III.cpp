class Solution {
public:
    vector<vector<int>> v;
    int ans, n, m;
    
    void call(int i, int j, int non_obs)
    {
        if(i == n || j == m || i < 0 || j < 0) return;
        if(v[i][j] == -1 || v[i][j] == 5) return;
        if(v[i][j] == 2){
            if(non_obs == 0) ans++;
            return;
        }
        
        v[i][j] = 5;
        non_obs--;
        
        call(i, j+1, non_obs);
        call(i, j-1, non_obs);
        call(i+1, j, non_obs);
        call(i-1, j, non_obs);
        
        v[i][j] = 0;
        non_obs++;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        v = grid;
        int non_obs = 0, x = -1, y = -1;
        ans = 0;
        
        n = grid.size();
        m = grid[0].size();
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                    grid[i][j] = 0;
                }
                if(grid[i][j] == 0) non_obs++;
            }
        }
        //cout << non_obs << "\n";
        
        call(x, y, non_obs);
        
        return ans;
    }
};