#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int a, b, p;

    cin >> a >> b >> p;

    string s;
    cin >> s;

    int l = s.size();

    int ans = l;

    for(int i = l-2; i >= 0; i--){
        if(s[i] == 'A'){
            if(a > p) break;
            p -= a;
            while(i >= 0 && s[i] == 'A') i--;
            i++;
            ans = i+1;
        }
        else{
            if(b > p) break;
            p -= b;
            while(i >= 0 && s[i] == 'B') i--;
            i++;
            ans = i+1;
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}