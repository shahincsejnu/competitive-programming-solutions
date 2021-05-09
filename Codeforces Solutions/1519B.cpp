#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int dp[105][105], n, m, k, arr[105][105];

bool func(int i, int j, int kk)
{
    if(i < 1 || j < 1 || i > n || j > m) return false;
    if(kk < 0) return false;

    if(dp[i][j] != -1) return dp[i][j];

    if(i == 1 && j == 1){
        if(kk == 0) return dp[i][j] = true;
        return dp[i][j] = false;
    }

    bool flag = func(i, j-1, kk-i) || func(i-1, j, kk-j);

    return dp[i][j] = flag;
}

void solve()
{
    cin >> n >> m >> k;

    memset(dp, -1, sizeof(dp));

    if(func(n, m, k)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}