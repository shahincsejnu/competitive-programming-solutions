#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    lli fact = 1;

    for(lli i = 1; i < n; i++) fact *= i;

    fact /= (n/2);

    cout << fact << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}