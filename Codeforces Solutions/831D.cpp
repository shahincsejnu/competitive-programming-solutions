#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
lli dp[1005][2005], arr[1005], brr[2005], p;

lli func(int pos1, int pos2)
{
    if(pos1 > n) return dp[pos1][pos2] = 0;
    if(pos2 > k) return dp[pos1][pos2] = 1e18;

    if(dp[pos1][pos2] != -1) return dp[pos1][pos2];

    return dp[pos1][pos2] = min(max(func(pos1+1, pos2+1), (abs(arr[pos1] - brr[pos2]) + abs(p - brr[pos2]))), func(pos1, pos2+1));
}

void solve()
{
    cin >> n >> k >> p;

    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= k; i++) cin >> brr[i];

    sort(arr+1, arr+n+1);
    sort(brr+1, brr+k+1);

    memset(dp, -1, sizeof(dp));

    cout << func(1, 1) << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}