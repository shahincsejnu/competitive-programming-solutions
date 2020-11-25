#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    map<int,int> mp;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int ans = -1;

    for(int i = 1; i <= n; i++){
        if(mp[arr[i]] == 1 ){
            if(ans == -1) ans = i;
            else{
                if(arr[ans] > arr[i]) ans = i;
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}