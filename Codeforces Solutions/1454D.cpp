#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli n, nn;
    cin >> n;
    nn = n;

    vector<pair<lli,lli>> v;
    lli mx = 0, base, val;

    for(lli i = 2; i*i <= n; i++){
        lli cnt = 0, val2 = 1;
        while(n%i == 0){
            cnt++;
            n /= i;
            val2 *= i;
        }

        if(cnt > mx){
            mx = cnt;
            base = i;
            val = val2;
        }
    }

    if(n != 1){
        lli cnt = 1;

        if(cnt > mx){
            mx = cnt;
            base = n;
            val = n;
        }
    }

    lli val3  = nn / val;
    cout << mx << "\n";

    if(val3 % base){
        mx--;
        val3 *= base;
    }

    for(int i = 1; i <= mx; i++) cout << base << " ";
    cout << val3 << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}