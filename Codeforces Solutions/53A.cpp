#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n;
    cin >> n;
    string ss, ans = "";

    for(int i = 1; i <= n; i++){
        cin >> ss;

        if(ss.substr(0, s.size()) == s){
            if(ans == "") ans = ss;
            else ans = min(ans, ss);
        }
    }

    if(ans == "") ans = s;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}