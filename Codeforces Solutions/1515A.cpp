#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr+1, arr+n+1);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += arr[i];
        if(sum == x){
            sum -= arr[i];
            swap(arr[i], arr[n]);
            sum += arr[i];
        }
    }

    if(sum == x) cout << "NO" << "\n";
    else{
        cout << "YES" << "\n";
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