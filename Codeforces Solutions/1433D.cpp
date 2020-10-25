#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int arr[n+5];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int flag = 0, val = n-1;

    for(auto it: mp){
        if(it.second > val){
            flag = 1;
            break;
        }
    }

    if(flag) cout << "NO" << "\n";
    else{
        cout << "YES" << "\n";

        int cnt = 0, idx = -1;
        vector<int> v;

        for(int i = 2; i <= n; i++){
            if(arr[i] == arr[1]){
                cnt++;
                v.push_back(i);
                continue;
            }

            cout << 1 << " " << i << "\n";
            idx = i;
        }

        for(int i = 0; i < cnt; i++){
            cout << idx << " " << v[i] << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}