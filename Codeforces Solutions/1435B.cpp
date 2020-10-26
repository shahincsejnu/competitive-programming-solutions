#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n+5][m+5], brr[n+5][m+5], crr[m+5][n+5], drr[n+5][m+5];
    vector<int> v;
    map<int, pair<int,int>> mp;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> brr[i][j];
            mp[brr[i][j]] = {i, j};
            arr[i][j] = brr[i][j];
        }
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> crr[i][j];
            drr[j][i] = crr[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        int val = crr[1][i];
        int r = mp[val].first, c = mp[val].second;

        v.push_back(r);
    }

    int sz = v.size();

    for(int i = 0; i < sz; i++){
        int r = v[i];

        for(int j = 1; j <= m; j++) cout << brr[r][j] << " ";
        cout << "\n";
    }
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}