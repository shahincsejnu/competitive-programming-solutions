#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n+5], brr[105] = {0};
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        brr[arr[i]] = 1;
    }

    int ans = 1e9;

    for(int i = 1; i <= 100; i++){
        if(!brr[i]) continue;

        int day = 0, cnt = 0, color = i, cnt2 = 0;

        for(int j = 1; j <= n; j++){
            if(arr[j] != color) cnt++;
            else if(cnt) cnt2++;

            if(cnt && (cnt+cnt2) == k){
                cnt = 0;
                cnt2 = 0;
                day++;
            }
            //if(cnt2 == k) cnt2 = 0;
        }

        if(cnt) day++;

        ans = min(ans, day);
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