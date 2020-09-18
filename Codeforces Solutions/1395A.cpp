#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int r, g, b, w;

    cin >> r >> g >> b >> w;

    int odd = (r%2) + (g%2) + (b%2) + (w%2);
    bool flag = false;

    if(odd <= 1 || odd == 4) flag = true;
    else{
        int mn = min({r, g, b});
        if(mn >= 1){
            r--; g--; b--; w++;
        }

        odd = (r%2) + (g%2) + (b%2) + (w%2);

        if(odd <= 1) flag = true;
    }

    if(flag) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}