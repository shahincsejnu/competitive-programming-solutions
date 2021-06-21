#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    lli n, x, t;

    cin >> n >> x >> t;

    lli ans = min(t/x, n-1), res = 0;

    if(ans == 0) res = 0;
    else{
        res = ans * (ans-1)/2;
        res += (ans * (n-ans));

        res = max(res, 0ll);
    }

    cout << res << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}