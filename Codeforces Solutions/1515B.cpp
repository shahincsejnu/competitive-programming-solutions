#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

map<lli, int> mp;

void Init()
{
    for(lli i = 1; ; i++){
        lli box = i*i;
        lli val1 = 2*box, val2 = 4*box;

        mp[val1] = 1;
        mp[val2] = 1;
        if(val1 > 1e9) break;
    }
}

void solve()
{
    lli n;
    cin >> n;

    if(mp[n]) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}