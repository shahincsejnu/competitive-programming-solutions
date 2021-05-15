#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;

    cin >> s;
    int n = s.size(), one = 0;

    bool flag = true;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            if(s[i] == '0' && one) flag = false;
            else if(s[i] == '1') one = 1;
        }
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    //fastio;

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}