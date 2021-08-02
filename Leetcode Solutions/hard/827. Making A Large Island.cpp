class Solution {
public:
    int val, n, cnt;
    map<int, int> mp;
    vector<vector<int>> v;
    int dx[4] = {+0, +0, +1, -1};
    int dy[4] = {+1, -1, +0, +0};

    void DFS(int x, int y)
    {
        if(x < 0 || x == n || y < 0 || y == n || v[x][y] != 1) return;

        cnt++;
        v[x][y] = val;

        DFS(x, y+1);
        DFS(x, y-1);
        DFS(x-1, y);
        DFS(x+1, y);
    }


    int largestIsland(vector<vector<int>>& grid) {
        val = 2;
        v = grid;

        n = grid.size();
        int mx = -1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j] == 1){
                    cnt = 0;
                    DFS(i, j);
                    mp[val] = cnt;
                    mx = max(mx, cnt);
                    val++;
                }
            }
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j]){
                    for(int k = 0; k < 4; k++){
                        int xx = i+dx[k], yy = j+dy[k], d = v[i][j];

                        if(xx >= 0 && yy >= 0 && xx < n && yy < n && !v[xx][yy]){
                            int res = mp[d]+1;
                            map<int, int> mpp;
                            mpp[d] = 1;

                            for(int kk = 0; kk < 4; kk++){
                                int xxx = xx+dx[kk], yyy = yy+dy[kk], dd;

                                if(xxx >= 0 && yyy >= 0 && xxx < n && yyy < n && v[xxx][yyy] && !mpp[v[xxx][yyy]]){
                                    dd = v[xxx][yyy];
                                    mpp[dd] = 1;
                                    res += mp[dd];
                                }
                            }
                            mx = max(mx, res);
                        }
                    }
                }
            }
        }

        if(mx == -1) mx = 1;

        return mx;
    }
};