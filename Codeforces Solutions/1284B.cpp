#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    vector<lli> v1, v2;

    for(int j = 1; j <= n; j++){
        int m;
        cin >> m;

        lli val, mn = 1e9, mx = -1, prev = 1e9, flag = 0;
        for(int i = 1; i <= m; i++){
            cin >> val;
            mn = min(mn, val);
            mx = max(mx, val);
            if(val > prev) flag = 1;
            prev = val;
        }

        if(!flag){
            v1.push_back(mn);
            v2.push_back(mx);
        }
    }

    sort(v2.begin(), v2.end());

    lli ans = n * n;

    int l1 = v1.size();

    for(int i = 0; i < l1; i++){
        lli val = v1[i];

        lli idx = upper_bound(v2.begin(), v2.end(), val) - v2.begin();
        ans -= idx;
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
