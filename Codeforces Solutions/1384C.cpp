#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int n;
string a, b;
map<int, int> mp;
vector<int> adj[30];

void DFS(int ch)
{
    mp[ch] = 1;

    for(auto son: adj[ch]){
        if(!mp[son]){
            DFS(son);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        cin >> n;

        cin >> a >> b;

        int flag = 0;
        for(char ch = 'a'; ch <= 't'; ch++) adj[ch-'a'].clear();

        for(int i = 0; i < n; i++){
            if(a[i] > b[i]) {flag = 1; break;}

            if(a[i] != b[i]){
                adj[a[i]-'a'].push_back(b[i]-'a');
                adj[b[i]-'a'].push_back(a[i]-'a');
            }
        }

        if(flag){
            cout << -1 << "\n";
            continue;
        }

        int ans = 20;

        mp.clear();

        for(int ch = 0; ch < 20; ch++){
            if(!mp[ch]){
                DFS(ch);
                ans--;
            }
        }

        cout << ans << "\n";
    }   
    
    return 0;
}
