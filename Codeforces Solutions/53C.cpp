#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n/2; i++) cout << i << " " << n-i+1 << " ";
    if(n%2) cout << (n/2)+1 << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}