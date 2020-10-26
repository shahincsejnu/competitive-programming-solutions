#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const lli MOD = 1e9 + 7;
lli bigpos, lesspos, fact[1010];

void Binary_Search(lli pos, lli n)
{
    int left = 0, right = n;

    while(left < right){
        int middle = (left + right) / 2;

        if(pos >= middle){
            if(pos != middle) lesspos++;
            left = middle + 1;
        }
        else{
            bigpos++;
            right = middle;
        }
    }
}

lli Big_Mod(lli base, lli power)
{
    if(power == 0) return 1;
    if(power == 1) return base;

    lli val = Big_Mod(base, power/2) % MOD;
    val = (val * val) % MOD;

    if(power%2) val = (val * base) % MOD;

    return val;
}

lli P(lli n, lli r)
{
    if(n == r) return fact[n];
    if(r == 0) return 1;
    return (fact[n] * Big_Mod(fact[n-r], MOD-2)) % MOD;
}

void solve()
{
    lli n, x, pos;

    cin >> n >> x >> pos;
    bigpos = lesspos = 0;

    Binary_Search(pos, n);
    //cout << bigpos << " " << lesspos << "\n";

    lli bignum = n-x, lessnum = x-1, num = n - bigpos - lesspos - 1;

    fact[0] = 1;
    for(lli i = 1; i <= 1000; i++){
        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }

    lli val1 = P(bignum, bigpos), val2 = P(lessnum, lesspos), val3 = fact[num];

    //cout << val1 << " " << val2 << " " << val3 << "\n";

    lli ans = (((val1 * val2) % MOD) * val3) % MOD;

    cout << ans << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}