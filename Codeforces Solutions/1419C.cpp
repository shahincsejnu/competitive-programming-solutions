#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int sum = 0, flag = 0, val;
    for(int i = 1; i <= n; i++){
        cin >> val;
        sum += x - val;
        if(val == x) flag++;
    }

    int ans;

    if(flag == n) ans = 0;
    else if(sum == 0 || flag) ans = 1;
    else ans = 2;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}
