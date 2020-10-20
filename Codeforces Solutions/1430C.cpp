#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    cout << 2 << "\n";

    int cur = n, prev = n-1;

    for(int i = 1; i < n; i++){
        int val = (prev+cur+1) / 2;
        cout << prev << " " << cur << "\n";
        cur = val;
        prev--;
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}