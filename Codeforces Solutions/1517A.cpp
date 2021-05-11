#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<lli> v;
int sz;

void Init()
{
    lli val = 2050;

    while(val <= 1e18){
        v.push_back(val);
        val *= 10;
    }
}

void solve()
{
    lli n;
    cin >> n;

    int cnt = 0;

    while(n >= 2050){
        int idx = upper_bound(v.begin(), v.end(), n) - v.begin();
        idx--;

        if(idx < 0) break;
        n -= v[idx];
        cnt++;
    }

    if(n == 0) cout << cnt << "\n";
    else cout << -1 << "\n";
}

int main()
{
    Init();
    sz = v.size();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}