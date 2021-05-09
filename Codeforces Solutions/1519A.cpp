#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli lo, hi, d;
    cin >> lo >> hi >> d;

    if(lo > hi) swap(lo, hi);

    if(hi <= ((d+1) * lo)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}