#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    lli sum = 0;

    int arr[n+5];
    for(int i = 0; i < n; i++) cin >> arr[i];

    bool flag = true;

    for(int i = 0; i < n; i++){
        if(arr[i] > i) sum += (arr[i] - i);
        else{
            int d = i - arr[i];
            if(d > sum){
                flag = false;
                break;
            }

            sum -= d;
            arr[i] += d;
        }
    }

    if(flag) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}