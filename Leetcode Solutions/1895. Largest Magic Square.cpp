class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> grid2 = grid;
        vector<vector<int>> grid3 = grid;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j == 0) continue;
                grid2[i][j] += grid2[i][j-1];
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j == 0) continue;
                grid3[j][i] += grid3[j-1][i];
            }
        }

        int mx = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = i, y = j;
                for(int xx = i+1, yy = j+1; xx < n && yy < m; xx++, yy++){
                    long long int ans = 0, sum = 0;
                    int flag = 0;

                    for(int a = x, b = y; a <= xx && b <= yy; a++, b++) sum += grid[a][b];
                    ans = sum;
                    sum = 0;

                    for(int a = xx, b = y; a >= x && b <= yy; a--, b++) sum += grid[a][b];
                    if(ans != sum) continue;

                    for(int a = x; a <= xx; a++){
                        if((grid2[a][yy] - grid2[a][y] + grid[a][y]) != ans){
                            flag = 1;
                            break;
                        }
                    }

                    if(flag) continue;

                    for(int b = y; b <= yy; b++){
                        if((grid3[xx][b] - grid3[x][b] + grid[x][b]) != ans){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag) continue;

                    mx = max(mx, xx-x+1);
                }
            }
        }

        return mx;
    }
};