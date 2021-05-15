#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    lli fact = 1, cnt = 0;

    for(lli i = 1; i < n; i++){
        if(__gcd(i, n) == 1){
            fact *= i;
            cnt++;
            fact %= n;
        }
    }

    if(fact != 1) cnt--;

    cout << cnt << "\n";
    for(lli i = 1; i < n; i++){
        if(__gcd(i, n) == 1 && (fact == 1 || fact != i)) cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}