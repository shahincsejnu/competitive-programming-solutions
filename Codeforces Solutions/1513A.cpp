#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int d = (n-1)/2;

    if(k > d) cout << -1 << "\n";
    else{
        int arr[n+5];
        for(int i = 1; i <= n; i++) arr[i] = i;

        int idx = n-1;
        if(n%2 == 0) idx--;

        while(k--){
            swap(arr[idx], arr[n]);
            idx -= 2;
        }

        for(int i = 1; i <= n; i++) cout << arr[i] << " \n"[i==n];
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}