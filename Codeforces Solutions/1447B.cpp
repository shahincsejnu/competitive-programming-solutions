#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int neg = 0, mn = 1e9, sum = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int val;
            cin >> val;
            if(val < 0) {val *= -1; neg++;}

            mn = min(mn, val);
            sum += val;
        }
    }

    if(neg%2) sum -= (2*mn);

    cout << sum << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}