#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

lli n, arr[5002], brr[5002], dp[5002][5002];

lli func(int i, int j)
{
    if(i > j) return 0;
    if(i == j) return dp[i][j] = arr[i] * brr[j];

    if(dp[i][j] != -1) return dp[i][j];

    return dp[i][j] = func(i+1, j-1) + (arr[i] * brr[j]) + (arr[j] * brr[i]);
}

void solve()
{
    fastio;

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++) cin >> brr[i];

    lli crr[n+5];
    crr[0] = 0;

    for(int i = 1; i <= n; i++){
        crr[i] = arr[i] * brr[i];
        crr[i] += crr[i-1];
    }

    lli mx = 0;
    memset(dp, -1, sizeof(dp));

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            mx = max(mx, func(i, j) + crr[i-1] + crr[n] - crr[j]);
        }
    }

    cout << mx << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}