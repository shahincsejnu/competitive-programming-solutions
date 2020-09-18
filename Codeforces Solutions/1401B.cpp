#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli x1, y1, z1, x2, y2, z2;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    lli ans = 0, mn;

    mn = min(z1, y2);
    z1 -= mn;
    ans += (mn * 2ll);

    mn = min(z1, z2);
    z2 -= mn;

    mn = min(x1, z2);
    z2 -= mn;

    mn = min(y1, z2);

    ans -= (mn * 2ll);

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}