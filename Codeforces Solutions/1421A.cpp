#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli a, b;

    cin >> a >> b;

    lli ans = b ^ a;

    cout << ans << "\n";
}

int main()
{
    int tc;

    tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}