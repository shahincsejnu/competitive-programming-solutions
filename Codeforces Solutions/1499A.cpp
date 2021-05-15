#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, w1, w2, w, b;
    cin >> n >> w1 >> w2;
    cin >> w >> b;

    int b1 = n-w1, b2 = n-w2;
    int ww = min(w1, w2), bb = min(b1, b2);
    w1 -= ww;
    w2 -= ww;
    b1 -= bb;
    b2 -= bb;

    bool flag = true;

    ww += w1/2;
    ww += w2/2;
    bb += b1/2;
    bb += b2/2;


    if(ww < w || bb < b) flag = false;

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