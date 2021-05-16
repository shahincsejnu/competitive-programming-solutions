#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    bool flag = true;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] != i) flag = false;
    }

    if(flag) cout << 0 << "\n";
    else if(arr[n] == n || arr[1] == 1) cout << 1 << "\n";
    else if(arr[n] == 1 && arr[1] == n) cout << 3 << "\n";
    else cout << 2 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}