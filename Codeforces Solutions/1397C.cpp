#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void OJ()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n;
    cin >> n;
    
    lli arr[n+5];

    for(int i = 1; i <= n; i++) cin >> arr[i];

    if(n == 1){
        cout << 1 << " " << 1 << "\n";
        cout << -arr[1] << "\n";
        cout << 1 << " " << 1 << "\n";
        cout << 0 << "\n";
        cout << 1 << " " << 1 << "\n";
        cout << 0 << "\n";
    }
    else{
        cout << 1 << " " << 1 << "\n";
        cout << -arr[1] << "\n";
        cout << 1 << " " << n << "\n";
        cout << 0 << " ";
        for(int i = 2; i <= n; i++) cout << -(n*arr[i]) << " \n"[i==n];
        cout << 2 << " " << n << "\n";
        for(int i = 2; i <= n; i++) cout << (n*arr[i]) - arr[i] << " \n"[i==n];
    }
}

int main()
{
    OJ();
    
    int tc = 1;
    //cin >> tc;
    
    while(tc--) solve();

    return 0;
}