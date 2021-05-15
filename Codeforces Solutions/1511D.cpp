#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

string s = "abcdefghijklmnopqrstuvwxyz";

void solve()
{
    int n, k;
    cin >> n >> k;

    string ss = "";
    k--;

    for(int i = 0; i < k; i++){
        for(int ii = i; ii <= k; ii++){
            if(i == 0){
                ss += s[ii];
                ss += s[ii];
            }
            else{
                if(ii == k) ss += s[ii];
                else{
                    ss += s[ii];
                    ss += s[i-1];
                }
            }
        }
    }
    if(k == 0) ss += s[k];

    int sz1 = ss.size();

    while(sz1 < n){
        sz1 += sz1;
        ss += ss;
    }

    for(int i = 0; i < n; i++) cout << ss[i];
    cout << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}