#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n, m;
    cin >> n >> m;

    lli sum = 0, val;
    for(int i = 1; i <= n; i++){
        cin >> val;
        sum += val;
    }

    if(sum == m) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}