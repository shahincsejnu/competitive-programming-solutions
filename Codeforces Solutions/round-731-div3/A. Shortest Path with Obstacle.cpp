#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int ans = 0;

    if(x1 == x2){
        if(y1 > y2) swap(y1, y2);
        ans = y2 - y1;
        if(x1 == x3){
            if((y3 >= y1) && (y3 <= y2)) ans += 2;
        }
    }
    else if(y1 == y2){
        if(x1 > x2) swap(x1, x2);
        ans = x2 - x1;
        if(y1 == y3){
            if((x3 >= x1) && (x3 <= x2)) ans += 2;
        }
    }
    else ans = abs(x1 - x2) + abs(y1 - y2);

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}