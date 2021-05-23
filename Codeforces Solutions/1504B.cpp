#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    if(s1 == s2){
        cout << "YES" << "\n";
        return;
    }

    int nn = n;
    for(int i = n-1; i >= 0; i--){
        if(s1[i] == s2[i]) nn--;
        else break;
    }
    n = nn;

    int zero = 0, one = 0, flip = 0;

    for(int i = 0; i < n; i++){
        if(s1[i] == '0') zero++;
        else one++;
    }

    bool flag = true;

    for(int i = n-1; i >= 0; i--){
        int val1 = s1[i]-'0', val2 = s2[i]-'0';

        if(flip%2) val1 ^= 1;

        if(val1 != val2){
            if(zero != one) {flag = false; break;}

            swap(zero, one);
            val1 ^= 1;
            if(val1) one--;
            else zero--;
            flip++;
        }
        else if(val1) one--;
        else zero--;
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