#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], mn = 2e9, idx = -1;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] < mn){
            mn = arr[i];
            idx = i;
        }
    }

    if(n == 1){
        cout << 0 << "\n";
        return;
    }

    int ans = n;
    if(idx == 1) ans--;
    cout << ans << "\n";

    if(ans == n){
        cout << 1 << " " << idx << " " << mn << " " << max(arr[1], arr[idx]) << "\n";
        arr[1] = mn;
        ans--;
    }

    for(int i = 2; i <= n; i++){
        cout << 1 << " " << i << " ";
        if(i%2 == 0) cout << arr[1] << " " << arr[1]+1 << "\n";
        else cout << arr[1] << " " << arr[1] << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}