#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli POW(lli x, lli n)
{
    lli val = 1;

    for(lli i = 0; i < n; i++) val *= x;

    return val;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;

    //cin >> t;
    t = 1;

    while(t--){
        lli n;
        cin >> n;

        lli arr[n+5], val = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            val += arr[i]-1;
        }

        sort(arr, arr+n);
        val += arr[n-1];

        lli ans = val-arr[n-1], cnt;

        for(lli i = 2; ; i++){
            cnt = 0;

            for(lli j = 0; j < n; j++){
                lli pw = POW(i, j);
                if(pw > val) {cnt = -1; break;}
                cnt += abs(arr[j] - pw);
            }

            if(cnt == -1) break;
            ans = min(ans, cnt);
        }

        cout << ans << "\n";
    }

    return 0;
}