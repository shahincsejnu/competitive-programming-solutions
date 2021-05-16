#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, d1, d2, idx1, idx2, ans, val, l1, l2, dp[5005][5005];
vector<int> v1, v2;

int func(int pos1, int pos2)
{
    if(pos2 == l2) return dp[pos1][pos2] = 0;
    if(pos1 == l1) return dp[pos1][pos2] = 1e9;

    if(dp[pos1][pos2] != -1) return dp[pos1][pos2];

    return dp[pos1][pos2] = min(func(pos1+1, pos2+1) + abs(v1[pos1]-v2[pos2]), func(pos1+1, pos2));
}

void solve()
{
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> val;
        if(val) v2.push_back(i);
        else v1.push_back(i);
    }

    l1 = v1.size();
    l2 = v2.size();

    memset(dp, -1, sizeof(dp));

    cout << func(0, 0) << "\n";
}

int main()
{
    fastio;
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}