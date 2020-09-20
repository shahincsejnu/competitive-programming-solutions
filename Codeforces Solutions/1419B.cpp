#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector<lli> v, vv;

void solve()
{
    lli x;
    cin >> x;

    int idx = upper_bound(v.begin(), v.end(), x) - v.begin();

    cout << idx-1 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    v.push_back(0);
    lli d = 2;
    for(lli i = 1; ;){
        lli val = (i * (i+1)) / 2;
        v.push_back(v.back() + val);
        if(v.back() >= 1e18) break;
        i += d;
        d *= 2;
    }

    while(tc--) solve();

    return 0;
}