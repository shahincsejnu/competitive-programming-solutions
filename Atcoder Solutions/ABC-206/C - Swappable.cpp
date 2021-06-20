#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int val;
    lli ans = 0;
    map<int, lli> mp;

    for(int i = 1; i <= n; i++){
        cin >> val;
        ans += (i - 1 - mp[val]);
        mp[val]++;
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}

