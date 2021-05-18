#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, u, r, d, l, uu, rr, dd, ll;
    cin >> n >> u >> r >> d >> l;

    int total = 1 << 4;
    bool flag = false;

    for(int i = 0; i < total; i++){
        uu = rr = dd = ll = 0;
        int mask1 = 1 << 0, mask2 = 1 << 1, mask3 = 1 << 2, mask4 = 1 << 3;

        if(i & mask1) {uu++; ll++;}
        if(i & mask2) {uu++; rr++;}
        if(i & mask3) {dd++; ll++;}
        if(i & mask4) {dd++; rr++;}

        uu = u-uu;
        rr = r-rr;
        dd = d-dd;
        ll = l-ll;

        if((uu >= 0 && uu <= n-2) && (rr >= 0 && rr <= n-2) && (dd >= 0 && dd <= n-2) && (ll >= 0 && ll <= n-2)) flag = true;
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}