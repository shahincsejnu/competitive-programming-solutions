#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    map<char, int> mp1, mp2, mp;

    for(int i = 1; i <= n; i += 2) mp1[s[i-1]]++;
    for(int i = 2; i <= n; i += 2) mp2[s[i-1]]++;
    for(int i = 0; i < n; i++) mp[s[i]]++;

    int ans = 0, mx = 0, ans2 = 0;

    for(auto it: mp1) mx = max(mx, it.second);
    ans = mx;
    mx = 0;
    for(auto it: mp2) mx = max(mx, it.second);
    ans += mx;

    for(auto it: mp) ans2 = max(ans2, it.second);

    int res;

    if(n%2 == 0) res = n - ans;
    else res = n - ans2;

    if(res )

    if(n%2 == 0) cout << n-ans << "\n";
    else cout << n - ans2 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}

