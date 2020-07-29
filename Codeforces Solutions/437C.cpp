#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(int t_case)
{
    int n, m;
    cin >> n >> m;

    vector< pair<int,int> > v;
    map<int,int> mpp;

    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        mpp[i] = val;
        v.push_back({val, i});
    }

    vector<int> adj[n+5];

    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        int val = v[i].first, idx = v[i].second;

        int l = adj[idx].size();

        for(int j = 0; j < l; j++){
            int u = adj[idx][j];

            if(mp[u]) continue;

            ans += mpp[u];
        }
        mp[idx] = 1;
    }

    cout << ans << "\n";
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //timesave;

    int tc = 1, t_case = 1;
    //cin >> tc;
    while(tc--) solve(t_case++);
 
    return 0;
}
