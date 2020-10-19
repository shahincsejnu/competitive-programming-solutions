#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    char ch[n+5][n+5];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> ch[i][j];
        }
    }

    vector<pair<int,int>> v;

    if(ch[1][2] == ch[2][1]){
        if(ch[n-1][n] == ch[1][2]) v.push_back({n-1, n});
        if(ch[n][n-1] == ch[1][2]) v.push_back({n, n-1});
    }
    else if(ch[n-1][n] == ch[n][n-1]){
        if(ch[1][2] == ch[n-1][n]) v.push_back({1, 2});
        if(ch[2][1] == ch[n-1][n]) v.push_back({2, 1});
    }
    else{
        if(ch[1][2] == '1') v.push_back({1, 2});
        if(ch[2][1] == '1') v.push_back({2, 1});

        if(ch[n-1][n] == '0') v.push_back({n-1, n});
        if(ch[n][n-1] == '0') v.push_back({n, n-1});
    }

    int cnt = v.size();

    cout << cnt << "\n";

    for(int i = 0; i < cnt; i++) cout << v[i].first << " " << v[i].second << "\n";
}

int main()
{
    int tc;

    tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}