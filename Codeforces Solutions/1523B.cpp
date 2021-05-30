#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    vector<pair<int,int>> vec;
    vector<int> type;

    for(int i = 1; i <= n; i += 2){
        lli a = arr[i], b = arr[i+1];

        type.push_back(1);
        vec.push_back({i, i+1});

        type.push_back(2);
        vec.push_back({i, i+1});

        type.push_back(2);
        vec.push_back({i, i+1});

        type.push_back(1);
        vec.push_back({i, i+1});

        type.push_back(2);
        vec.push_back({i, i+1});

        type.push_back(2);
        vec.push_back({i, i+1});
    }

    int l = vec.size();
    cout << l << "\n";
    for(int i = 0; i < l; i++){
        cout << type[i] << " " << vec[i].first << " " << vec[i].second << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}