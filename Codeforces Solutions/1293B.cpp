#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    double n, ans = 0;
    cin >> n;

    for(double i = 1; i <= n; i++){
        ans += (1/i);
    }

    cout << setprecision(12) << fixed << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}