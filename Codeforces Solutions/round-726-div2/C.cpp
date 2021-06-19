#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    sort(arr+1, arr+n+1);

    if(n < 3 || (arr[1] == arr[n])){
        for(int i = 1; i <= n; i++) cout << arr[i] << " \n"[i==n];
        return;
    }

    int mn = 2e9, idx1 = -1, idx2 = -1;
    for(int i = 2; i <= n; i++){
        if((arr[i]-arr[i-1]) < mn){
            mn = arr[i]-arr[i-1];
            idx1 = i-1;
            idx2 = i;
        }
    }

    int brr[n+5], i = 2;
    brr[1] = arr[idx1];
    brr[n] = arr[idx2];

    for(int j = idx1+2; j <= n; j++, i++) brr[i] = arr[j];
    for(int j = 1; j < idx1; j++, i++) brr[i] = arr[j];


    for(int i = 1; i <= n; i++) cout << brr[i] << " \n"[i==n];
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}