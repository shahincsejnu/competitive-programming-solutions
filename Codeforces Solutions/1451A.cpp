#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans;

    if(n == 1) ans = 0;
    else if(n == 2) ans = 1;
    else if(n == 3) ans = 2;
    else if(n%2) ans = 3;
    else ans = 2;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}