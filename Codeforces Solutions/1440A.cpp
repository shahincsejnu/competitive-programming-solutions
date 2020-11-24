#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, c0, c1, h;

    cin >> n >> c0 >> c1 >> h;

    string s;
    cin >> s;

    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') zero++;
        else one++;
    }

    int ans = (zero * c0) + (one * c1);

    ans = min(ans, ((zero+one)*c1) + (zero * h));
    ans = min(ans, ((zero+one)*c0) + (one * h));
    ans = min(ans, (zero * c1) + (one * c0) + ((zero+one) * h));

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}