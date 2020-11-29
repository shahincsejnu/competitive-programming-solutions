#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n, m, r, c;

    cin >> n >> m >> r >> c;

    lli ans = max((r-1), (n-r)) + max((c-1), (m-c));

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}