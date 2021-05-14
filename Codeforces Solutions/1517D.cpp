#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, k;
lli dp[505][505][25];
map<pair<pair<int,int>, pair<int,int>>, lli> cost;

lli DFS(int i, int j, int kk)
{
    if(i < 1 || j < 1 || i > n || j > m) return 1e18;
    if(kk == 0) return 0;

    if(dp[i][j][kk] != -1) return dp[i][j][kk];

    lli mn = 1e18;
    mn = min(mn, DFS(i, j+1, kk-1) + cost[{{i, j}, {i, j+1}}]);
    mn = min(mn, DFS(i, j-1, kk-1) + cost[{{i, j}, {i, j-1}}]);
    mn = min(mn, DFS(i+1, j, kk-1) + cost[{{i, j}, {i+1, j}}]);
    mn = min(mn, DFS(i-1, j, kk-1) + cost[{{i, j}, {i-1, j}}]);

    return dp[i][j][kk] = mn;
}

void solve()
{
    cin >> n >> m >> k;

    int val;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < m; j++){
            cin >> val;
            cost[{{i, j}, {i, j+1}}] = cost[{{i, j+1}, {i, j}}] = val;
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j <= m; j++){
            cin >> val;
            cost[{{i, j}, {i+1, j}}] = cost[{{i+1, j}, {i, j}}] = val;
        }
    }

    memset(dp, -1, sizeof(dp));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(k%2){
                cout << -1 << " ";
                continue;
            }

            cout << 2 * DFS(i, j, k/2) << " ";
        }
        cout << "\n";
    }
}

int main()
{
    fastio;

    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}