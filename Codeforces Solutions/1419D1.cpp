#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    if(n == 1){
        cout << 0 << "\n";
        cout << arr[1] << "\n";
        return;
    }

    sort(arr+1, arr+n+1);

    int brr[n+5];
    int i = n, j = 1;

    for(int k = 1; k <= n; k++){
        if(i < j) break;
        if(k%2){
            brr[k] = arr[i];
            i--;
        }
        else{
            brr[k] = arr[j];
            j++;
        }
    }

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