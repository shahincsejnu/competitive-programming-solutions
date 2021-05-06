#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    int ans = 0;

    for(lli i = 1; i <= 9; i++){
        lli start = i;

        while(start <= n){
            ans++;
            start *= 10;
            start += i;
        }
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