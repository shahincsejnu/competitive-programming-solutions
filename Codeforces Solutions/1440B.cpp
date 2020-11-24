#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n*k+5], val = n*k;
    for(int i = 1; i <= val; i++) cin >> arr[i];

    sort(arr+1, arr+val+1);

    lli sum = 0;
    int idx = (n+1)/2;
    idx = n-idx;

    for(int i = val; i >= 1; i--){
        if(!k) break;
        for(int j = 1; j <= idx; j++) i--;
        sum += (arr[i] * 1ll);
        k--;
    }

    cout << sum << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}