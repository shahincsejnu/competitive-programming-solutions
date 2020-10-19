#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int x1, y1, x2, y2, ans;

    cin >> x1 >> y1 >> x2 >> y2;

    ans = abs(x1-x2) + abs(y1-y2);

    if(x1 != x2 && y1 != y2) ans += 2;

    cout << ans << "\n";
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc;

    tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}