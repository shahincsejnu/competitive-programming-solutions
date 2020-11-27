#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    lli arr[n+5], brr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++) cin >> brr[i];

    lli ans, lo = 1, hi = 1e9, mid;

    while(lo <= hi){
        mid = (lo + hi) / 2;

        lli sum = 0, cnt = 0;
        int mp[n+5] = {0};

        for(int i = 1; i <= n; i++){
            if(arr[i] <= mid){
                cnt = max(cnt, arr[i]);
                mp[i] = -1;
            }
        }

        sum = cnt;

        for(int i = 1; i <= n; i++){
            if(mp[i] == -1) continue;

            if(brr[i] <= cnt) cnt -= brr[i];
            else{
                sum += (brr[i]-cnt);
                cnt = 0;
            }
        }

        if(sum <= mid){
            hi = mid-1;
            ans = mid;
        }
        else lo = mid+1;
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