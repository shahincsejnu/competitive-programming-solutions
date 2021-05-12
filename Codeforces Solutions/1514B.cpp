#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

const lli MOD = 1e9 + 7;

lli big_mod(lli base, lli power)
{
    if(power == 1) return base;
    if(power == 0) return 1;

    lli x = big_mod(base, power/2) % MOD;

    lli val = (x * x) % MOD;

    if(power%2) val = (val * base) % MOD;

    return val;
}

void solve()
{
    lli n, k;
    cin >> n >> k;

    cout << big_mod(n, k)%MOD << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}