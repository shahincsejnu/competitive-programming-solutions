#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, s, k;

    cin >> n >> s >> k;

    map<int,int> mp;
    int val;

    for(int i = 1; i <= k; i++){
        cin >> val;
        mp[val] = 1;
    }

    int lo = max(1, s-1500), hi = min(n, s+1500), ans = 2e9;

    for(int i = lo; i <= hi; i++){
        if(mp[i]) continue;

        ans = min(ans, abs(s-i));
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}