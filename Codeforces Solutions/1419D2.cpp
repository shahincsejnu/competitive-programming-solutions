#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    sort(arr+1, arr+n+1);

    int i = 1;

    int brr[n+5];

    for(int j = 2; j <= n; j += 2) {brr[j] = arr[i]; i++;}
    for(int j = 1; j <= n; j += 2) {brr[j] = arr[i]; i++;}

    int cnt = 0;

    for(int i = 2; i < n; i++){
        if((brr[i] < brr[i-1]) && (brr[i] < brr[i+1])) cnt++;
    }

    cout << cnt << "\n";
    for(int i = 1; i <= n; i++) cout << brr[i] << " \n"[i==n];
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}