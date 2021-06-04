#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = n, zero = 0, one = 0, odd_zero = 0, odd_one = 0;
    string s;

    for(int i = 1; i <= n; i++){
        cin >> s;

        int l = s.size();

        for(int j = 0; j < l; j++){
            if(s[j] == '0'){
                if(l%2) odd_zero++;
                else zero++;
            }
            else{
                if(l%2) odd_one++;
                else one++;
            }
        }
    }

    if(zero%2 && odd_one){
        zero--;
        one++;
    }
    else if(one%2 && odd_zero){
        one--;
        zero++;
    }

    if(one%2 || zero%2) ans--;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}