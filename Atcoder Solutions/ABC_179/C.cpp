#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const int M = 1e6 + 5;
int arr[M];

void solve()
{
    int n;
    cin >> n;

    int ans = 0, val = n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            arr[j]++;
        }
    }

    for(int i = 1; i <= n; i++){
        val = n - i;

        ans += arr[val];
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
