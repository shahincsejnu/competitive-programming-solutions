#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const lli MOD = 1e9 + 7;
const int M = 3e5 + 5;

vector<int> adj[M];
vector<lli> each_nodes_x_freq, koto_number_child;

void DFS(int node, int parent)
{
    for(auto child: adj[node]){
        if(child != parent) DFS(child, node);
    }

    vector<pair<lli,int>> childs;

    for(auto child: adj[node]){
        if(child != parent) childs.push_back({each_nodes_x_freq[child], child});
    }

    sort(childs.begin(), childs.end());
    reverse(childs.begin(), childs.end());

    lli cnt = 1;
    for(auto it: childs) {koto_number_child[it.second] = cnt; cnt++;}

    for(auto child: adj[node]){
        if(child != parent) each_nodes_x_freq[node] += (each_nodes_x_freq[child] * koto_number_child[child]);
    }
}

void solve()
{
    int n, u, v;
    lli x;
    cin >> n >> x;

    each_nodes_x_freq.clear();
    koto_number_child.clear();

    each_nodes_x_freq.push_back(1);
    koto_number_child.push_back(0);
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        each_nodes_x_freq.push_back(1);
        koto_number_child.push_back(0);
    }

    for(int i = 1; i < n; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(1, -1);

    lli total = ((each_nodes_x_freq[1]%MOD) * (x % MOD) ) % MOD;

    cout << total << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}
