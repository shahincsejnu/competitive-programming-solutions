#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const int M = 2e5 + 5;
lli dp[M][2];

void solve()
{
    string s;
    cin >> s;

    int l = s.size();
    memset(dp, 0, sizeof(dp));

    if(s[0] == '0'){
        dp[0][0] = 1;
        dp[0][1] = 0;
    }
    else if(s[0] == '1'){
        dp[0][0] = 0;
        dp[0][1] = 1;
    }
    else{
        dp[0][0] = 1;
        dp[0][1] = 1;
    }

    for(int i = 1; i < l; i++){
        if(s[i] == '0'){
            dp[i][0] = dp[i-1][1] + 1;
            dp[i][1] = 0;
        }
        else if(s[i] == '1'){
            dp[i][0] = 0;
            dp[i][1] = dp[i-1][0] + 1;
        }
        else{
            dp[i][0] = dp[i-1][1] + 1;
            dp[i][1] = dp[i-1][0] + 1;
        }
    }

    lli total = 0;

    for(int i = 0; i < l; i++){
        if(s[i] == '?') total += max(dp[i][0], dp[i][1]);
        else total += (dp[i][0] + dp[i][1]);
    }
    cout << total << "\n";
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}