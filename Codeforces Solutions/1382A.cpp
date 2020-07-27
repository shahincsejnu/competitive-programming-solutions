#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        map<int,int> mp;
        int val;

        int ans = -1;

        for(int i = 1; i <= n; i++){
            cin >> val;
            mp[val] = 1;
        }

        for(int i = 1; i <= m; i++){
            cin >> val;
            if(mp[val]) ans = val;
        }

        if(ans == -1) cout << "NO" << "\n";
        else{
            cout << "YES" << "\n";
            cout << 1 << " " << ans << "\n";
        }
    }
    
    return 0;
}
