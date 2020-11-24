#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while(q--){
        int l, r;
        cin >> l >> r;

        l--;
        r--;
        bool flag = false;

        for(int i = r+1; i < n; i++){
            if(s[i] == s[r]){
                flag = true;
                break;
            }
        }

        for(int i = 0; i < l; i++){
            if(s[i] == s[l]){
                flag = true;
                break;
            }
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}