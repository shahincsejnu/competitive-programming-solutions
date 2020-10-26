#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], brr[n+5];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }

    reverse(brr+1, brr+n+1);

    for(int i = 1; i <= n; i++){
        int val = arr[i] * brr[i];

        if((i%2) && (val < 0)) brr[i] *= -1;
        if(!(i%2) && (val > 0)) brr[i] *= -1;
    }

    for(int i = 1; i <= n; i++) cout << brr[i] << " \n"[i==n];
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}