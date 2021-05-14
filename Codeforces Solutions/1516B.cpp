#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], total = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        total ^= arr[i];
    }

    bool flag = false;

    int xr = 0, xr2, xr3;
    for(int i = 1; i < n; i++){
        xr ^= arr[i];
        xr2 = total ^ xr;

        if(xr == xr2){
            flag = true;
            break;
        }
    }

    xr = 0;
    for(int i = 1; i < n; i++){
        if(flag) break;
        xr ^= arr[i];
        xr2 = 0;
        for(int j = i+1; j < n; j++){
            xr2 ^= arr[j];

            xr3 = total ^ xr ^ xr2;

            if(xr == xr2 && xr2 == xr3){
                flag = true;
                break;
            }
        }
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}