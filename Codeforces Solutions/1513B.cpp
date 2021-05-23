#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const lli MOD = 1e9 + 7;
vector<lli> fact;

void Init()
{
    fact.push_back(1);
    fact.push_back(1);

    for(lli i = 2; i <= 200005; i++) fact.push_back((fact.back() * i)%MOD);
}

void solve()
{
    lli n;
    cin >> n;

    lli cnt = 0, mn = 2e9, arr[n+5];
    map<lli, lli> mp;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
        if(arr[i] <= mn){
            mn = arr[i];
            cnt = mp[arr[i]];
        }
    }

    for(int i = 1; i <= n; i++){
        if((arr[i] & mn) != mn){
            cout << 0 << "\n";
            return;
        }
    }

    if(cnt < 2) cout << 0 << "\n";
    else{
        lli ans = cnt * (cnt-1);
        ans %= MOD;

        ans = (ans * fact[n-2]) % MOD;

        cout << ans << "\n";
    }
}

int main()
{
    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}