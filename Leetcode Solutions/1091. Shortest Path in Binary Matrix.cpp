class Solution {
public:
    int dx[8] = {+0, +0, +1, -1, -1, -1, +1, +1};
    int dy[8] = {+1, -1, +0, +0, -1, +1, -1, +1};
    
    bool is_valid(int r, int c, int n, int m){
        if(r < 0 || c < 0 || r >= n || c >= m) return false;
        return true;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(grid[0][0] || grid[n-1][m-1]) return -1;
        
        vector<vector<int>> visited(n, vector<int> (m, 0));
        visited[0][0] = 1;
        
        queue<pair<int,int>> q;
        
        q.push({0, 0});
        
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            
            for(int i = 0; i < 8; i++){
                int r = x + dx[i];
                int c = y + dy[i];
                
                if(is_valid(r, c, n, m) && grid[r][c] == 0 && visited[r][c] == 0){
                    q.push({r, c});
                    visited[r][c] = visited[x][y] + 1;
                }
            }
        }
        
        if(visited[n-1][m-1] == 0) visited[n-1][m-1] = -1;
        
        return visited[n-1][m-1];
    }
};