#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    lli arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    lli ans = 1e18, sum = 0, up_mn = 1e18, right_mn = 1e18, up_cnt = 0, right_cnt = 0;
    sum = arr[1];
    up_mn = arr[1];
    up_cnt = 1;

    for(int i = 2; i <= n; i++){
        sum += arr[i];

        if(i%2){
            up_cnt++;
            up_mn = min(up_mn, arr[i]);
        }
        else{
            right_cnt++;
            right_mn = min(right_mn, arr[i]);
        }

        lli val = up_mn * (n-up_cnt);
        val += right_mn * (n-right_cnt);

        ans = min(ans, sum+val);
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