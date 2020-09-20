#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    v.push_back({0, 0});

    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    bool flag = false;

    for(int i = 1; i <= n-2; i++){
        if((v[i].first == v[i].second) && (v[i+1].first == v[i+1].second) && (v[i+2].first == v[i+2].second)) {flag = true; break;}
    }

    if(flag) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
