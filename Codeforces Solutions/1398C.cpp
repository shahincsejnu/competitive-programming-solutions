#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void OJ()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    lli n;
    cin >> n;

    string s;
    cin >> s;

    map<lli,lli> mp;
    mp[0] = 1;
    lli ans = 0, sum = 0;
    lli arr[n+5];

    for(int i = 0; i < n; i++) arr[i] = (s[i]-'0')-1;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        mp[sum]++;
    }

    for(auto it: mp){
        ans += (it.second * (it.second-1))/2;
    }

    cout << ans << "\n";
}

int main()
{
    OJ();
    
    int tc = 1;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}