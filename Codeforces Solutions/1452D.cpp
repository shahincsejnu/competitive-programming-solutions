#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const lli MOD = 998244353;

lli Big_Mod(lli base, lli power)
{
    if(power == 0) return 1;
    if(power == 1) return base;

    lli val = Big_Mod(base, power/2) % MOD;
    val = (val * val) % MOD;

    if(power%2) val = (val * base) % MOD;

    return val;
}

void solve()
{
    int n;
    cin >> n;

    lli fib[n+5];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= n; i++) fib[i] = (fib[i-1] + fib[i-2]) % MOD;

    lli pw = Big_Mod(2, n);

    pw = Big_Mod(pw, MOD-2);

    lli ans = (fib[n] * pw) % MOD;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    //cin >> tc;
    while(tc--) solve();

    return 0;
}