#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int val, sum = 0, ans;
    for(int i = 1; i <= n; i++){
        cin >> val;
        sum += val;
    }

    if(sum == n) ans = 0;
    else if(sum < n) ans = 1;
    else ans = sum - n;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}