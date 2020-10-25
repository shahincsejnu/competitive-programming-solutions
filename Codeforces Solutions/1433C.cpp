#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], brr[n+5], mx = -1, idx = -1;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        brr[i] = arr[i];

        if(arr[i] > mx){
            mx = arr[i];
            idx = i;
        }
    }

    sort(arr+1, arr+n+1);

    if(arr[1] == arr[n]) cout << -1 << "\n";
    else{
        for(int i = 1; i <= n; i++){
            if(brr[i] == mx){
                if(i == 1){
                    if((i+1 <= n) && brr[i+1] < mx){
                        idx = i;
                        break;
                    }
                }
                else if(i == n){
                    if((i-1 >= 1) && brr[i-1] < mx){
                        idx = i;
                        break;
                    }
                }
                else{
                    if((brr[i-1] < mx) || (brr[i+1] < mx)){
                        idx = i;
                        break;
                    }
                }
            }
        }

        cout << idx << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}