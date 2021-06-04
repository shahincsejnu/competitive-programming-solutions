#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;


    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(), v.end());

    int win1 = max(a, b), win2 = max(c, d);

    if(win1 > win2) swap(win1, win2);

    if(v[2] == win1 && v[3] == win2) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}