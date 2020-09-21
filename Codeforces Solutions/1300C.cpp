#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int idx = -1;
    for(int i = 31; i >= 0; i--){
        int cnt = 0, id;
        int mask = 1 << i;
        for(int j = 0; j < n; j++){
            if(arr[j] & mask){
                cnt++;
                id = j;
            }
        }

        if(cnt == 1){
            idx = id;
            break;
        }
    }

    if(idx == -1) idx = 0;

    cout << arr[idx];

    for(int i = 0; i < n; i++){
        if(i != idx) cout << " " << arr[i];
    }
    cout << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
