#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    lli arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    lli ans = 0;

    for(int i = 2; i <= n; i++){
        if(arr[i] <= arr[i-1]) ans += (arr[i-1] - arr[i]);
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