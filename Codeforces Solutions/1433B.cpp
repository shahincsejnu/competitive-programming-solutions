#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int ans = 0, cnt = 0, flag = 0;

    for(int i = 1; i <= n; i++){
        if(arr[i] == 0 && !flag) continue;
        if(arr[i] == 1 && !flag) flag = 1;

        if(arr[i] == 1){
            ans += cnt;
            cnt = 0;
        }
        else cnt++;
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