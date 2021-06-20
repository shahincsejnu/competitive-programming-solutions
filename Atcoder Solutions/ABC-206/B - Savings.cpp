#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    lli start = 1, end = n, ans = -1, mid;

    while(start <= end){
        mid = start + (end-start)/2;

        lli val = (mid * (mid+1)/2);

        if(val >= n){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
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

