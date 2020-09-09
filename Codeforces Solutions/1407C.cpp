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

    vector<int> ans(n+5, -1);

    int mx = 1;

    for(int i = 2; i <= n; i++){
        int d1, d2;
        cout << "? " << mx << " " << i << "\n";
        fflush(stdout);
        cin >> d1;
        cout << "? " << i << " " << mx << "\n";
        fflush(stdout);
        cin >> d2;

        if(d1 > d2){
            ans[mx] = d1;
            mx = i;
        }
        else ans[i] = d2;
    }

    ans[mx] = n;

    cout << "!";
    for(int i = 1; i <= n; i++) cout << " " << ans[i];
    fflush(stdout);
}

int main()
{
    OJ();
    
    int tc = 1;
    //cin >> tc;
    
    while(tc--) solve();

    return 0;
}