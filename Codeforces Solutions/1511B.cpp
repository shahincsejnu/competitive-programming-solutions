#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    lli a, b, c;
    cin >> a >> b >> c;

    lli mn = min(a, b), val = 1, gcd = 1;

    for(int i = 1; i < mn; i++) val *= 10;

    for(int i = 1; i < c; i++) gcd *= 10;

    lli d = (val-1)/gcd;
    d++;

    val = (d * gcd);

    d = max(a, b) - mn;

    lli val2 = val;
    for(int i = 1; i <= d; i++) val2 *= 10;

    val2 += gcd;

    if(a > b) swap(val, val2);

    cout << val << " " << val2 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}