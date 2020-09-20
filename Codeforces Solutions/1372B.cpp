#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;

    cin >> n;

    int mn = 2e9, a, b, sq = sqrt(n);
    sq++;

    if(n%2){
        for(int i = 1; i <= sq; i++){
            if(n%i == 0){
                int aa = i, bb = n-i;
                int gcd = __gcd(aa, bb);
                int lcm = aa * (bb/gcd);

                if(lcm < mn){
                    mn = lcm;
                    a = aa;
                    b = bb;
                }

                int d = n/i;
                if(d == n) continue;
                aa = d; bb = n-d;
                gcd = __gcd(aa, bb);
                lcm = aa * (bb/gcd);

                if(lcm < mn){
                    mn = lcm;
                    a = aa;
                    b = bb;
                }
            }
        }

        cout << a << " " << b << "\n";
    }
    else cout << n/2 << " " << n/2 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}