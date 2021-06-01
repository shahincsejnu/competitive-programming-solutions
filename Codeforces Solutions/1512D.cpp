#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

const int M = 2e5 + 5;
lli n, brr[M];

void Print(int x_i, int mx_i)
{
    for(int i = 1; i <= n+2; i++){
        if(i == x_i || i == mx_i) continue;
        cout << brr[i] << " ";
    }
    cout << "\n";
}

void solve()
{
    cin >> n;

    lli total = 0;
    for(int i = 1; i <= n+2; i++){
        cin >> brr[i];
        total += brr[i];
    }

    sort(brr+1, brr+n+3);

    for(int i = 1; i <= n+2; i++){
        lli x = brr[i];

        if((total - x) % 2) continue;

        lli mx;

        if(i == n+2){
            mx = brr[n+1];
            if((total - x - mx) == mx){
                Print(i, n+1);
                return;
            }
        }
        else{
            mx  = brr[n+2];
            if((total - x - mx) == mx){
                Print(i, n+2);
                return;
            }
        }
    }

    cout << -1 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}