#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    lli n, q, l, r;

    cin >> n >> q;

    string s;
    cin >> s;

    lli arr[n+5];
    arr[0] = 0;
    for(int i = 1; i <= n; i++){
        arr[i] = (s[i-1] - 'a') + 1;
    }

    for(int i = 1; i <= n; i++) arr[i] += arr[i-1];

    while(q--){
        cin >> l >> r;

        cout << (arr[r] - arr[l-1]) << "\n";
    }
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}