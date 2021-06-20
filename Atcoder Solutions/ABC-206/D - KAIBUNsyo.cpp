#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const int M = 2e5 + 5;
vector<int> adj[M];
int vis[M], cnt;

void DFS(int node)
{
    cnt++;
    vis[node] = 1;

    for(auto son : adj[node]){
        if(!vis[son]) DFS(son);
    }
}

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int nn = n/2;
    set<int> st;

    for(int i = 1; i <= nn; i++){
        if(arr[i] != arr[n-i+1]){
            adj[arr[i]].push_back(arr[n-i+1]);
            adj[arr[n-i+1]].push_back(arr[i]);
            st.insert(arr[i]);
            st.insert(arr[n-i+1]);
        }
    }

    int ans = 0;

    for(auto it: st){
        if(!vis[it]){
            cnt = 0;
            DFS(it);
            ans += (cnt-1);
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}

