#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;

    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        int mx = max(x, y);

        int ans = 2*mx;

        if(x != y) ans--;

        cout << ans << "\n";
    }

    return 0;
}