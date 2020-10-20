#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    lli arr[n+5];
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    lli mx = arr[n-1], mn = arr[0];

    for(int i = n-2, j = 1; j <= k && i >= 0; i--, j++){
        mx += arr[i];
    }

    cout << mx << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}