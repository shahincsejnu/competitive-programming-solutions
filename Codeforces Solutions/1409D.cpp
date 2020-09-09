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

    while(n--){
        lli nn, s;
        cin >> nn >> s;

        lli ans = 0, mul = 1, hand = 0;

        while(nn){
            if(hand) {nn++; hand = 0;}

            lli d_nn = nn, sum = 0;
           
            while(d_nn){
                sum += d_nn%10;
                d_nn /= 10;
            }
            
            if(sum <= s) break;

            lli d = nn%10;
            nn /= 10;
            if(!d) {mul *= 10; continue;}
            //d += hand;
            hand = 1;
            
            lli dd = 10-d;
            dd *= mul;
            mul *= 10;

            //if(!nn) ans += hand;
            ans += dd;
        }

        cout << ans << "\n";
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