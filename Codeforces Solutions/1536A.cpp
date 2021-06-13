#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int val, flag = 0;
    for(int i = 1; i <= n; i++){
        cin >> val;
        if(val < 0) flag = 1;
    }

    if(flag){
        cout << "NO" << "\n";
        return;
    }

    cout << "YES" << "\n";
    cout << 101 << "\n";
    for(int i = 0; i <= 100; i++) cout << i << " \n"[i==100];
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}