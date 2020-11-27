#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    int n = s.size();

    int ans = a, prev = -1, one = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            one++;
            if(prev != -1){
                int d = i - prev - 1;
                d *= b;

                ans += min(d, a);
            }
            i++;
            while(i < n && s[i] == '1') i++;
            i--;

            prev = i;
        }
    }

    if(!one) ans -= a;

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}