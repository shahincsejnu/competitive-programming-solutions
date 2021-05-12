#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i < n && k; i++){
        int d = arr[i];

        if(d >= k){
            arr[i] -= k;
            arr[n] += k;
            k = 0;
        }
        else{
            arr[i] -= d;
            arr[n] += d;
            k -= d;
        }
    }

    for(int i = 1; i <= n; i++) cout << arr[i] << " \n"[i==n];
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}