#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int mx = 0, cnt = 0;

    for(int i = 1; i <= 100; i++){
        map<int,int> mp;
        for(int j = 1; j <= n; j++) mp[arr[j]]++;

        cnt = 0;
        for(int j = 1; j <= n; j++){
            if(mp[arr[j]] == 0 || arr[j] >= i) continue;

            int d = i - arr[j];

            if(d == arr[j]){
                if(mp[d] >= 2) {mp[d] -= 2; cnt++;}
            }
            else{
                if(mp[d]) {mp[d]--; mp[arr[j]]--; cnt++;}
            }
        }

        mx = max(mx, cnt);
    }

    cout << mx << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}