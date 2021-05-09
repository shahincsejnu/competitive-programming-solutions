#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, t, k;
    cin >> n >> t >> k;

    int lo = 1, hi = n, mid, ans = -1, val;

    while(lo <= hi){
        mid = lo + (hi-lo)/2;

        cout << "? " << lo << " " << mid << "\n";
        cout.flush();

        cin >> val;
        int d = mid-lo+1;
        int dd = d-val;

        if(dd == k){
            ans = mid;
            hi = mid-1;
        }
        else if(dd > k) hi = mid-1;
        else{
            lo = mid+1;
            k -= dd;
        }
    }

    cout << "! " << ans << "\n";
    cout.flush();
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}