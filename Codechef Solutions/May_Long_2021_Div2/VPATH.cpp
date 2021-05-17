#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const lli MOD = 1e9 + 7;
const int M = 1e5 + 5;

vector<int> adj[M];
lli res1[M], res2[M];

void DFS(int node, int parent)
{
    res1[node] = res2[node] = 1;
    lli total = 0;

    for(auto child: adj[node]){
        if(child != parent){
            DFS(child, node);

            res1[node] = (res1[node] + (2 * res1[child])) % MOD;
            res2[node] = (res2[node] + res2[child] + res1[child]) % MOD;
            total = (total + res1[child]) % MOD;
        }
    }

    for(auto child: adj[node]){
        if(child != parent) res2[node] = (MOD + res2[node] + ((res1[child] * (total - res1[child]))%MOD)) % MOD;
    }
}

void solve()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        adj[i].clear();
        res1[i] = 0;
        res2[i] = 0;
    }

    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(1, -1);

    cout << res2[1] << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}
