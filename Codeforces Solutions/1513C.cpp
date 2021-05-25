#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const lli MOD = 1e9 + 7;
const int M = 2e5 + 5;
lli dp[12][M];
int m;

lli func(int num, int op)
{
    if(op == 0) return dp[num][op] = 1;

    if(dp[num][op] != -1) return dp[num][op];

    lli val = 0;

    if((num+1) == 10) val = (func(1, op-1)%MOD + func(0, op-1)%MOD) % MOD;
    else val = func(num+1, op-1) % MOD;

    return dp[num][op] = val;
}

void solve()
{
    string s;
    int m;

    cin >> s >> m;

    int n = s.size();
    lli ans = 0;

    for(int i = 0; i < n; i++)  ans = (ans + func(s[i]-'0', m)) % MOD;

    cout << ans << "\n";
}

int main()
{
    fastio;
    memset(dp, -1, sizeof(dp));
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}