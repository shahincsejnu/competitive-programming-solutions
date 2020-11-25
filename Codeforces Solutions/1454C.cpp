#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    map<int, vector<int>> mp;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }

    int ans = 1e9;

    for(auto it: mp){
        int l = it.second.size(), cnt = 0;
        for(int i = 0; i < l; i++){
            int idx = it.second[i];
            if(i == 0){
                if(idx != 1) cnt++;
            }
            else{
                int idx2 = it.second[i-1];
                if(idx != idx2+1) cnt++;
            }

            if(i == l-1){
                if(idx != n) cnt++;
            }
        }
        ans = min(ans, cnt);
    }

    cout << ans << "\n";
}

int main()
{
    //ios_base:sync_with_stdio(false); cin.tie(0);

    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}