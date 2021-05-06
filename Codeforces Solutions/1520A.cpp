#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<char, int> mp;

    string s;
    cin >> s;

    bool flag = true;

    for(int i = 0; i < n; i++){
        if(i && s[i] == s[i-1]) continue;
        if(mp[s[i]]){
            flag = false;
            break;
        }
        mp[s[i]] = 1;
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}