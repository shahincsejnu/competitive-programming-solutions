#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size(), ans = 0;
    map<int,int> mp;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1] && !mp[i-1]) {ans++; mp[i] = 1;}
        if(i+1 < n && s[i+1] == s[i-1] && !mp[i-1]) {ans++; mp[i+1] = 1;}
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