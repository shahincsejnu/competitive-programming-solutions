#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    map<int,int> mp;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] -= i;
        mp[arr[i]]++;
    }

    lli ans = 0;
    for(int i = 1; i <= n; i++){
        int val = arr[i];
        mp[arr[i]]--;
        ans += mp[val];
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