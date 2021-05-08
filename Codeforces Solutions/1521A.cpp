#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli a, b;
    cin >> a >> b;

    if(b == 1){
        cout << "NO" << "\n";
        return;
    }

    if(a == 1){
        cout << "YES" << "\n";
        lli x = a, z = a*b*2;
        lli y = (2*a*b) - a;
        cout << x << " " << y << " " << z << "\n";
        return;
    }

    cout << "YES" << "\n";
    cout << a << " " << a*b << " " << (a*b) + a << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}