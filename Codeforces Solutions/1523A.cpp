#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    int one = 0;
    if(s[0] == '1') one++;
    if(s[n-1] == '1') one++;

    for(int i = 1; i < n-1; i++){
        if(s[i] == '1') one++;
    }

    if(!one){
        cout << s << "\n";
        return;
    }

    m = min(m, n);

    string ss;

    for(int i = 1; i <= m; i++){
        ss = s;

        for(int j = 0; j < n; j++){
            if(j == 0){
                if(ss[j] == '0' && (j+1) < n && ss[j+1] == '1') s[j] = '1';
            }
            else if(j == n-1){
                if(ss[j] == '0' && (j-1) >= 0 && ss[j-1] == '1') s[j] = '1';
            }
            else{
                if(ss[j] == '0' && (ss[j-1] != ss[j+1])) s[j] = '1';
            }
        }
    }
    cout << s << "\n";
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}