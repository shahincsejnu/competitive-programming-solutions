#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n+5][m+5];
    vector<pair<int, pair<int,int>>> v;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
            v.push_back({arr[i][j], {i, j}});
        }
    }

    sort(v.begin(), v.end());

    int now = 1;

    for(int i = 0; i < m; i++){
        int x = v[i].second.first, y = v[i].second.second;

        for(int j = 0; j < m; j++){
            if(v[j].second.first == x && v[j].second.second == now) v[j].second.second = y;
        }

        swap(arr[x][y], arr[x][now]);
        now++;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << arr[i][j] << " \n"[j==m];
        }
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}