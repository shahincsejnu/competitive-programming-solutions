#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    vector<pair<int,int>> v;

    v.push_back(make_pair(x, y));
    v.push_back(make_pair(1, y));
    v.push_back(make_pair(1, 1));

    map<pair<int,int>, int> mp;

    mp[{x, y}] = mp[{1, y}] = mp[{1, 1}] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            x = i; y = j;
            if(i%2 == 0) y = m - (j-1);

            if(mp[{x, y}]) continue;
            v.push_back(make_pair(x, y));
        }
    }
    int l = v.size();
    for(int i = 0; i < l; i++) cout << v[i].first << " " << v[i].second << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}