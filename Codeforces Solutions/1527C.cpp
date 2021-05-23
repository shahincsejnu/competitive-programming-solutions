#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n, val;
    cin >> n;

    lli dp[n+5] = {0};

    map<lli, lli> mp;

    for(int i = 1; i <= n; i++){
        cin >> val;
        dp[i] = dp[i-1] + mp[val];
        mp[val] += i;
    }

    lli ans = 0;
    for(int i = 1; i <= n; i++) ans += dp[i];

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}