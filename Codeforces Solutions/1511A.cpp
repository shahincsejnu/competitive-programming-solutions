#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt = 0, val;

    for(int i = 1; i <= n; i++){
        cin >> val;
        if(val == 2) continue;
        cnt++;
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