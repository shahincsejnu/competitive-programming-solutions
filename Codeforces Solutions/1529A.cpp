#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], mn = 1e9;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(arr[i] > mn) cnt++;
    }

    cout << cnt << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}