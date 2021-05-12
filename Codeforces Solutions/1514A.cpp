#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

map<int,int> mp;

void Init()
{
    for(int i = 1; i*i <= 1e4; i++) mp[i*i] = 1;
}

void solve()
{
    int n;
    cin >> n;

    int val;
    bool flag = false;

    for(int i = 1; i <= n; i++){
        cin >> val;
        if(!mp[val]) flag = true;
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}